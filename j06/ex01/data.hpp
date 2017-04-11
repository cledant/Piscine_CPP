/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 19:58:59 by cledant           #+#    #+#             */
/*   Updated: 2017/04/11 20:29:53 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <string>
# include <iostream>

struct Data
{
	std::string 	s1;
	int				n;
	std::string		s2;
};

void	*serialize(void);
Data	*deserialize(void *raw);

#endif
