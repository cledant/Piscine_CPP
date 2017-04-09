/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribeiro <aribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 17:59:41 by aribeiro          #+#    #+#             */
/*   Updated: 2017/04/09 14:01:22 by aribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include "Player.hpp"
#include "World.hpp"
#include "Bullet.hpp"
#include "EnemyA.hpp"
#include "AEntity.hpp"

static void		ncurse_game_over(AEntity ** bullet, int scrx, int scry)
{
	delete *bullet;
	*bullet = NULL;
	clear();
	getmaxyx(stdscr, scry, scrx);
	if ( has_colors() && COLOR_PAIRS >= 13 )
        init_pair(1,  COLOR_RED,     COLOR_BLACK);
	color_set(1, NULL);
    mvaddstr(6 + 1, 32, " Game over :'(");
	refresh();
}

static int		ncurse_collision_attack(Player & ship, World & w, bool *attack, AEntity ** bullet, int scrx, int scry)
{
	int j = 0;
    if (*attack == true && *bullet != NULL)
    {
        while (j < 3)
        {
            if (w.getEnemy(j)->getPosX() == (*bullet)->getPosX() && w.getEnemy(j)->getPosY() == (*bullet)->getPosY())
            {
                w.resetEnemy(j, scrx, scry);
				*attack = false;
				delete *bullet;
				*bullet = NULL;
				break;
            }
            j++;
        }
    }
    j = 0;
    while (j < 3)
    {
        if (w.getEnemy(j)->getHP() != 0 && w.getEnemy(j)->getPosX() == ship.getPosX() && w.getEnemy(j)->getPosY() == ship.getPosY())
            return -1;
		j++;
    }
    return 0;
}

static void        ncurse_getch(Player & ship, bool *attack, int scry, int scrx)
{
    if (getch() == ' ')
        *attack = true;
    if (getch() == KEY_DOWN) {
        if (ship.getPosY() + 1 < scry)
            ship.move_down();
    }
    else if (getch() == KEY_UP) {
        if (ship.getPosY() > 0)
            ship.move_up();
    }
    else if (getch() == KEY_LEFT) {
        if (ship.getPosX() - 1 > 0)
            ship.move_left();
    }
    else if (getch() == KEY_RIGHT) {
        if (ship.getPosX() + 1 < scrx)
            ship.move_right();
    }
}

int			main()
{
    int scry, scrx, j;
    int i = 0;
	bool attack = false;
	initscr();
	curs_set(0);
	keypad(stdscr, TRUE);
	getmaxyx(stdscr, scry, scrx);
	Player *ship = new Player(2, scry/2);
    World *w = new World(scrx, scry);
    AEntity *bullet = NULL;
	start_color();
	while (1) {
		clear();
		getmaxyx(stdscr, scry, scrx);
        w->resetEnemyWindow(scrx, scry);
		mvprintw(ship->getPosY(), ship->getPosX(), ship->getSpriteStr());
    	j = 0;
		while (j < 3)
        {
            if (w->getEnemy(j)->getHP() != 0) {
                mvprintw(w->getEnemy(j)->getPosY(), w->getEnemy(j)->getPosX(), w->getEnemy(j)->getSpriteStr());
				halfdelay(1);
			}
            j++;
        }
		if (attack == true)
		{
			if (i == 0) {
                bullet = ship->shoot();
				i++;
			}
			if (bullet->getPosX() < scrx - 3) {
				mvprintw(bullet->getPosY(), bullet->getPosX(), bullet->getSpriteStr());
				halfdelay(1);
			}
			else {
				attack = false;
				i = 0;
                delete bullet;
                bullet = NULL;
			}
		}
		else
			i = 0;
		refresh();
        ncurse_getch(*ship, &attack, scry, scrx);
		if (bullet != NULL)
			bullet->scrolling();
        if (ncurse_collision_attack(*ship, *w, &attack, &bullet, scrx, scry) == -1)
        {
			ncurse_game_over(&bullet, scrx, scry);
			break;
        }
		w->scrollEnemy();
		if (ncurse_collision_attack(*ship, *w, &attack, &bullet, scrx, scry) == -1)
		{
			ncurse_game_over(&bullet, scrx, scry);
			break;
		}
    }
	napms(2000);
	endwin();
    delete ship;
	delete w;
	w = NULL;
    ship = NULL;
	return 0;
}
