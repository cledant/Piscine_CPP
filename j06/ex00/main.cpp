/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 12:54:49 by cledant           #+#    #+#             */
/*   Updated: 2017/04/12 22:12:36 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

static void		char_conversion(std::string const &input)
{
	std::stringstream		ss_stoi;
	int						result;
	std::stringstream		ss_itos;
	std::string				str_result;

	ss_stoi.str(input);

	if ((input.length() == 1 && std::isdigit(input.c_str()[0]) == 0) || input.length() == 0)
	{
		char tmp = input.c_str()[0];
		result = *reinterpret_cast<int *>(&tmp);
	}
	else
	{
		if (!(ss_stoi >> result))
		{	
			std::cout << "char: impossible" << str_result << std::endl;
			return ;
		}
	}
	if (result > 127 || result < -128)
	{	
		std::cout << "char: impossible" << str_result << std::endl;
		return ;
	}
	if (std::isprint(result) == 0)
	{	
		std::cout << "char: Non displayable" << str_result << std::endl;
		return ;
	}
	ss_itos << static_cast<char>(result);
	str_result = ss_itos.str();
	std::cout << "char: '" << str_result << "'" << std::endl;
}

static void		int_conversion(std::string const &input)
{
	std::stringstream		ss_stoi;
	int						result;
	std::stringstream		ss_itos;
	std::string				str_result;

	ss_stoi.str(input);
	if ((input.length() == 1 && std::isdigit(input.c_str()[0]) == 0) || input.length() == 0)
	{
		char tmp = input.c_str()[0];
		result = *reinterpret_cast<int *>(&tmp);
	}
	else
	{
		if (!(ss_stoi >> result))
		{	
			std::cout << "int: impossible" << str_result << std::endl;
			return ;
		}
	}
	ss_itos << static_cast<int>(result);
	str_result = ss_itos.str();
	std::cout << "int: " << str_result << std::endl;
}

static void		float_conversion(std::string const &input)
{
	std::stringstream		ss_stoi;
	float					result;
	int						precision = 1;
	std::stringstream		ss_itos;
	std::string				str_result;
	std::string				sub_str;
	std::string				sub_input;
	std::string				sub_sub_input;

	if (input.length() == 0)
	{	
		result = 0;
		ss_itos << std::showpoint << std::setprecision(precision) << static_cast<float>(result);
		str_result = ss_itos.str();
		std::cout <<  "float: " << str_result << "0f" << std::endl;
		return ;
	}
	if (input == "nan" || input == "nanf")
	{
		result = std::numeric_limits<float>::signaling_NaN();
	}
	else if (input == "-inff" || input == "-inf")
	{
		result = -std::numeric_limits<float>::infinity();
	}
	else if (input == "+inff" || input == "+inf")
	{
		result = std::numeric_limits<float>::infinity();
	}
	else
	{
		if (input.find_first_not_of("0") != std::string::npos)
			sub_input = input.substr(input.find_first_not_of("0"));
		else
			sub_input = "0";
		if (sub_input.find_first_not_of("0123456789.-+") != std::string::npos)
			sub_input.resize(sub_input.find_first_not_of("0123456789.-+"));
		sub_str = sub_input.substr(sub_input.find(".") + 1);
		ss_stoi.str(sub_input);	
		if (sub_str.length() == sub_input.length())
			precision = sub_input.length() + 1;
	 	else if (sub_str.length() == 0)
			precision = sub_input.length();
		else
			precision = sub_input.length() - 1;
		if (input.c_str()[0] == '+' || input.c_str()[0] == '-')
			precision--;
		if ((input.length() == 1 && std::isdigit(input.c_str()[0]) == 0))
		{
			char tmp = input.c_str()[0];
			result = static_cast<float>(tmp);
			ss_itos << static_cast<float>(result);
			str_result = ss_itos.str();
			std::cout <<  "float: " << str_result << ".0f" << std::endl;
			return ;
		}
		else
		{
			if (!(ss_stoi >> result))
			{
				std::cout << "float: impossible" << str_result << std::endl;
				return ;
			}
		}
	}
	ss_itos << std::showpoint << std::setprecision(precision) << static_cast<float>(result);
	str_result = ss_itos.str();
	std::cout <<  "float: " << str_result << "f" << std::endl;
}


static void		double_conversion(std::string const &input)
{
	std::stringstream		ss_stoi;
	double					result;
	int						precision = 1;
	std::stringstream		ss_itos;
	std::string				str_result;
	std::string				sub_str;
	std::string				sub_input;
	std::string				sub_sub_input;

	if (input.length() == 0)
	{	
		result = 0;
		ss_itos << std::showpoint << std::setprecision(precision) << static_cast<double>(result);
		str_result = ss_itos.str();
		std::cout <<  "double: " << str_result << "0" << std::endl;
		return ;
	}
	if (input == "nan" || input == "nanf")
	{
		result = std::numeric_limits<double>::signaling_NaN();
	}
	else if (input == "-inff" || input == "-inf")
	{
		result = -std::numeric_limits<double>::infinity();
	}
	else if (input == "+inff" || input == "+inf")
	{
		result = std::numeric_limits<double>::infinity();
	}
	else
	{
		if (input.find_first_not_of("0") != std::string::npos)
			sub_input = input.substr(input.find_first_not_of("0"));
		else
			sub_input = "0";
		if (sub_input.find_first_not_of("0123456789.-+") != std::string::npos)
			sub_input.resize(sub_input.find_first_not_of("0123456789.-+"));
		sub_str = sub_input.substr(sub_input.find(".") + 1);
		ss_stoi.str(sub_input);	
		if (sub_str.length() == sub_input.length())
			precision = sub_input.length() + 1;
	 	else if (sub_str.length() == 0)
			precision = sub_input.length();
		else
			precision = sub_input.length() - 1;
		if (input.c_str()[0] == '+' || input.c_str()[0] == '-')
			precision--;
		if (input.length() == 1 && std::isdigit(input.c_str()[0]) == 0)
		{
			char tmp = input.c_str()[0];
			result = static_cast<double>(tmp);
			ss_itos << static_cast<double>(result);
			str_result = ss_itos.str();
			std::cout <<  "double: " << str_result << ".0" << std::endl;
			return ;
		}
		else
		{
			if (!(ss_stoi >> result))
			{
				std::cout << "double: impossible" << str_result << std::endl;
				return ;
			}
		}
	}
	ss_itos << std::showpoint << std::setprecision(precision) << static_cast<double>(result);
	str_result = ss_itos.str();
	std::cout <<  "double: " << str_result << std::endl;
}

int		main(int argc, char **argv)
{
	std::string		input;

	if (argc != 2)
	{
		std::cout << "Please enter only one argument !"	 << std::endl;
		return (0);
	}
	input = argv[1];
	char_conversion(input);
	int_conversion(input);
	float_conversion(input);
	double_conversion(input);
	return (0);
}
