/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 15:21:27 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 15:26:31 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*ptr;
	std::string		&ref = str;

	ptr = &str;	
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return (0);
}
