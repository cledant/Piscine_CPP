/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Counter.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 15:33:22 by cledant           #+#    #+#             */
/*   Updated: 2017/04/03 16:34:16 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COUNTER_HPP
# define COUNTER_HPP

namespace Counters {

class Counter
{
	public :

		Counter(int const max);
		~Counter(void);
		int		get_current_user(void) const;
		int		get_max_user(void) const;
		void	increment_counters();

	private :

		int			_cur_user;
		int			_max_user;
		int const	_limit_user;
};
}

#endif
