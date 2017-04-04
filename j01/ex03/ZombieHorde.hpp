/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 13:26:17 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 15:35:03 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
	public :
		ZombieHorde(int N);
		~ZombieHorde(void);
		void	announce(void) const;

	private :
		Zombie		**_horde;
		int			_size;
};
#endif
