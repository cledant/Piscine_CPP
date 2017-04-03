/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 13:43:23 by cledant           #+#    #+#             */
/*   Updated: 2017/04/03 19:43:02 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "User.hpp"
#include "Counter.hpp"

int		main(void)
{
	std::string			cmd;
	Users::User			list[USER_LIMIT];
	Counters::Counter	counter(USER_LIMIT);
	int					c;
	int					index;

	c = 0;
	index = 0;
	while (1)
	{
		cmd.clear();
		std::cin.clear();
		std::cin >> cmd;
		if (std::strcmp(cmd.c_str(), "ADD") == 0)
		{
			list[counter.get_current_user()].add_user();
			counter.increment_counters();
		}
		else if (std::strcmp(cmd.c_str(), "SEARCH") == 0)
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
					std::cin.clear();
					std::cin >> index;
					if (index >= 0 && index < USER_LIMIT)
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
		else if (std::strcmp(cmd.c_str(), "EXIT") == 0)
			return (0);
	}
	return (0);
}
