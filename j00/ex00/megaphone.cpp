/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 11:37:46 by cledant           #+#    #+#             */
/*   Updated: 2017/04/03 13:35:52 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(int argc, char **argv)
{
	int				c_arg;
	size_t			c_str;
	std::string		str;

	c_arg = 1;
	c_str = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (c_arg < argc)
	{
		str += argv[c_arg];
		c_arg++;
	}
	while (c_str < str.length())
	{
		str[c_str] = std::toupper(str[c_str]);
		c_str++;
	}
	std::cout << str << std::endl;
	return (0);
}
