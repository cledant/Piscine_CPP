/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 13:43:23 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 08:58:58 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "User.hpp"
#include "Counter.hpp"

int		main(void)
{
	std::string			cmd;
	std::string			str_index;
	std::stringstream	ss;
	Users::User			list[USER_LIMIT];
	Counters::Counter	counter(USER_LIMIT);
	int					c;
	int					index;

	c = 0;
	index = 0;
	while (1)
	{
		if (std::cin.fail() == 1)
			break ;
		cmd.clear();
		std::cin.clear();
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			list[counter.get_current_user()].add_user();
			counter.increment_counters();
		}
		else if (cmd == "SEARCH")
		{
			if (counter.get_max_user() != 0)
			{
				std::cout << "     index|first name| last name|  nickname|" << std::endl;
				while (c < counter.get_max_user())
				{
					list[c].display_sum_up(c);
					c++;
				}
				std::cout << "Please write the desired entry" << std::endl;
				while (1)
				{
					str_index.clear();
					ss.clear();
					std::cin.clear();
					std::getline(std::cin, str_index);
					ss.str(str_index);
					ss >> index;
					if (index >= 0 && index < counter.get_max_user())
						break ;
					std::cout << "Please write a correct entry !" << std::endl;
				}
				c = 0;
				list[index].display_all_info();
				index = 0;
			}
			else
				std::cout << "No user to display" << std::endl;
		}
		else if (cmd == "EXIT")
			return (0);
	}
	return (0);
}
