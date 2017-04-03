/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 14:03:37 by cledant           #+#    #+#             */
/*   Updated: 2017/04/03 19:25:44 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USER_HPP
# define USER_HPP

# include <string>
# include <iostream>
# include <iomanip>
# define USER_LIMIT 8

namespace Users {

class User
{
	public :

		User(void);
		~User(void);
		
		void	add_user(void);
		void	display_sum_up(int const index) const;
		void	display_all_info(void) const;

	private :

		std::string		_firstname;
		std::string		_lastname;
		std::string		_nickname;
		std::string		_login;
		std::string		_postaladdress;
		std::string		_emailaddress;
		std::string		_phonenumber;
		std::string		_birthday;
		std::string		_favmeal;
		std::string		_underwearcolor;
		std::string		_secret;

		void			_add_firstname(void);
		void			_add_lastname(void);
		void			_add_nickname(void);
		void			_add_login(void);
		void			_add_postaladdress(void);
		void			_add_emailaddress(void);
		void			_add_phonenumber(void);
		void			_add_birthday(void);
		void			_add_favmeal(void);
		void			_add_underwearcolor(void);
		void			_add_secret(void);
};
}
#endif
