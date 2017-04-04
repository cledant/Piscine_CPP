/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 18:50:06 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 21:00:03 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

static void		replace_in_string(std::string &tmp, std::string &s1,
					std::string &s2)
{
	size_t	start_pos = 0;

	while ((start_pos = tmp.find(s1, start_pos)) != std::string::npos)
	{
		tmp.replace(start_pos, s1.length(), s2);
		start_pos += s2.length();
	}
}

static void		replace_in_stream(std::ifstream &ifs, std::ofstream &ofs,
					std::string &s1, std::string &s2)
{
	std::string			tmp;

	while (std::getline(ifs, tmp))
	{
		replace_in_string(tmp, s1, s2);
		if (!ifs.fail() && !ifs.bad() && !ifs.eof())
			tmp += "\n";
		ofs << tmp;
	}
	ifs.close();
	ofs.close();
}

static int		outfile_open(std::string &out, std::ofstream &ofs)
{
	ofs.open(out, std::ofstream::out);
	if (ofs.fail())
	{	
		std::cout << "Error openning output file" << std::endl;
		return (0);
	}
	return (1);
}

static int		infile_open(std::string &filename, std::ifstream &ifs)
{
	ifs.open(filename, std::ifstream::in);
	if (ifs.fail())
	{	
		std::cout << "Error openning input file" << std::endl;
		return (0);
	}
	return (1);
}

static int		check_args(int &argc, char **argv, std::string &filename,
					std::string &s1, std::string &s2)
{
	if (argc < 4 || argc >= 5)
	{
		std::cout << "Number of arguments invalid" << std::endl;
		return (0);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.length() == 0 || s2.length() == 0)
	{
		std::cout << "Invalid parameter(s)" << std::endl;
		return (0);
	}
	return (1);
}

int					main(int argc, char **argv)
{
	std::string		filename;
	std::string		out_file;
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		s1;
	std::string		s2;

	if (check_args(argc, argv, filename, s1, s2) == 0)
		return (0);
	if (infile_open(filename, ifs) == 0)
		return (0);
	out_file = filename + ".replace";
	if (outfile_open(out_file, ofs) == 0)
	{
		ifs.close();
		return (0);
	}
	replace_in_stream(ifs, ofs, s1, s2);
	return (0);
}
