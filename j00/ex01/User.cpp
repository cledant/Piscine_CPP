/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 14:03:54 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 09:57:13 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "User.hpp"

namespace Users {

User::User(void)
{
	this->_firstname.clear();
	this->_lastname.clear();
	this->_nickname.clear();
	this->_login.clear();
	this->_postaladdress.clear();
	this->_emailaddress.clear();
	this->_phonenumber.clear();
	this->_birthday.clear();
	this->_favmeal.clear();
	this->_underwearcolor.clear();
	this->_secret.clear();
	return ;
}

User::~User(void)
{
	return ;
}

void	User::_add_firstname(void)
{
	std::cin.clear();
	this->_firstname.clear();
	std::cout << "Enter your first name :" << std::endl;
	std::getline(std::cin, this->_firstname);
}

void	User::_add_lastname(void)
{
	std::cin.clear();
	this->_lastname.clear();
	std::cout << "Enter your last name :" << std::endl;
	std::getline(std::cin, this->_lastname);
}

void	User::_add_nickname(void)
{
	std::cin.clear();
	this->_nickname.clear();
	std::cout << "Enter your nickname :" << std::endl;
	std::getline(std::cin, this->_nickname);
}

void	User::_add_login(void)
{
	std::cin.clear();
	this->_login.clear();
	std::cout << "Enter your login :" << std::endl;
	std::getline(std::cin, this->_login);
}

void	User::_add_postaladdress(void)
{
	std::cin.clear();
	this->_postaladdress.clear();
	std::cout << "Enter your postal address :" << std::endl;
	std::getline(std::cin, this->_postaladdress);
}

void	User::_add_emailaddress(void)
{
	std::cin.clear();
	this->_emailaddress.clear();
	std::cout << "Enter your email address :" << std::endl;
	std::getline(std::cin, this->_emailaddress);
}

void	User::_add_phonenumber(void)
{
	std::cin.clear();
	this->_phonenumber.clear();
	std::cout << "Enter your phone number :" << std::endl;
	std::getline(std::cin, this->_phonenumber);
}

void	User::_add_birthday(void)
{
	std::cin.clear();
	this->_birthday.clear();
	std::cout << "Enter your birthday date :" << std::endl;
	std::getline(std::cin, this->_birthday);
}

void	User::_add_favmeal(void)
{
	std::cin.clear();
	this->_favmeal.clear();
	std::cout << "Enter your favorite meal :" << std::endl;
	std::getline(std::cin, this->_favmeal);
}

void	User::_add_underwearcolor(void)
{
	std::cin.clear();
	this->_underwearcolor.clear();
	std::cout << "Enter your underwear color :" << std::endl;
	std::getline(std::cin, this->_underwearcolor);
}

void	User::_add_secret(void)
{
	std::cin.clear();
	this->_secret.clear();
	std::cout << "Enter your darkest secret :" << std::endl;
	std::getline(std::cin, this->_secret);
}

void	User::add_user(void)
{
	this->_add_firstname();
	this->_add_lastname();
	this->_add_nickname();
	this->_add_login();
	this->_add_postaladdress();
	this->_add_emailaddress();
	this->_add_phonenumber();
	this->_add_birthday();
	this->_add_favmeal();
	this->_add_underwearcolor();
	this->_add_secret();
}

void	User::display_sum_up(int const index) const
{
	char	buffer[11];

	std::cout << std::setw(10) << index << "|";
	if (this->_firstname.length() > 10)
	{
		this->_firstname.copy(buffer, 9, 0);
		buffer[9] = '.';
		buffer[10] = '\0';
		std::cout << buffer << "|";
	}
	else
		std::cout << std::setw(10) << this->_firstname << "|";
	if (this->_lastname.length() > 10)
	{
		this->_lastname.copy(buffer, 9, 0);
		buffer[9] = '.';
		buffer[10] = '\0';
		std::cout << buffer << "|";
	}
	else 
		std::cout << std::setw(10) << this->_lastname << "|";
	if (this->_nickname.length() > 10)
	{
		this->_nickname.copy(buffer, 9, 0);
		buffer[9] = '.';
		buffer[10] = '\0';
		std::cout << buffer << "|" << std::endl;
	}
	else
		std::cout << std::setw(10) << this->_nickname << "|" << std::endl;
}

void	User::display_all_info(void) const
{
	std::cout << "First name : " << this->_firstname << std::endl;
	std::cout << "Last name : " << this->_lastname << std::endl;
	std::cout << "Nickname : " << this->_nickname << std::endl;
	std::cout << "Login : " << this->_login << std::endl;
	std::cout << "Postal address : " << this->_postaladdress << std::endl;
	std::cout << "Email address : " << this->_emailaddress << std::endl;
	std::cout << "Phone number : " << this->_phonenumber << std::endl;
	std::cout << "Birthday date : " << this->_birthday << std::endl;
	std::cout << "Favorite meal : " << this->_favmeal << std::endl;
	std::cout << "Underwear color : " << this->_underwearcolor << std::endl;
	std::cout << "Darkest secret : " << this->_secret << std::endl;
}
}
