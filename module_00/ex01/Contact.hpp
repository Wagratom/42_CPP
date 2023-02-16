/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:02:46 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/15 22:59:16 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Contact
{
	public:
		Contact(/* args */);
		~Contact();

		void		set_firstName( std::string first_name );
		void		set_lastName( std::string last_name );
		void		set_nickname( std::string nickname );
		void		set_phoneNumber( std::string phone_number );
		void		set_darkSecret( std::string dark_secret );

		std::string	get_firstName( void );
		std::string	get_lastName( void );
		std::string	get_nickname( void );
		std::string	get_phoneNumber( void );
		std::string	get_darkSecret( void );

	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _dark_secret;
};
