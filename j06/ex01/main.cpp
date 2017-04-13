/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 19:57:10 by cledant           #+#    #+#             */
/*   Updated: 2017/04/12 17:18:29 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

struct Data
{
	std::string		s1;
	int				n;
	std::string		s2;
};

void	*serialize(void)
{
	Data	*new_data = new Data;
	size_t	c = 0;
	char	random;

	while (c < 8)
	{
		random = (std::rand() % 127);
		if (std::isalnum(random) == 1)
		{
			new_data->s1 += random;
			c++;
		}
	}
	new_data->n = std::rand();
	c = 0;
	while (c < 8)
	{
		random = (std::rand() % 127);
		if (std::isalnum(random) == 1)
		{
			new_data->s2 += random;
			c++;
		}
	}
	std::cout << "===========Serialized data==============" << std::endl;
	std::cout << new_data->s1 << std::endl;
	std::cout << new_data->n << std::endl;
	std::cout << new_data->s2 << std::endl;
	std::cout << "========================================" << std::endl;
	return (reinterpret_cast<void *>(new_data));
}

Data	*deserialize(void *raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int		main(void)
{
	Data	*data;
	void	*raw;

	std::srand(clock());
	raw = serialize();
	data = deserialize(raw);

	std::cout << "=========Deserialized data==============" << std::endl;
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	std::cout << "========================================" << std::endl;
	delete data;
	return (0);
}
