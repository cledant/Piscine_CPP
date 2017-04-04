/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 10:29:17 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 10:56:43 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony
{
	public :
		Pony(std::string pony_name);
		~Pony(void);
		static void ponyOnTheHeap(std::string name);
		static void ponyOnTheStack(std::string name);
		void changePonyName(std::string new_pony_name);
	
	private :
		std::string _name;
};

#endif
