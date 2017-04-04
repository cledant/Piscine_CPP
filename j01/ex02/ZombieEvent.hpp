/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 11:57:05 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 13:15:28 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
	public :
		ZombieEvent(void);
		~ZombieEvent(void);
		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name);
		void	randomChump(void) const;

	private :
		std::string _event_type;
};

#endif
