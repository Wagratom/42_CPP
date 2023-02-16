/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:26:31 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/15 23:02:53 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <Contact.hpp>
#include <iostream>

class PhoneBook
{
	public:
		PhoneBook(/* args */);
		~PhoneBook();

		int		get_input( void );
		int		get_valid_input( void );

		void	handle_input( void );

		void		add_contact( void );
		std::string	get_data(const char *msg);

		void	search_contacts( void );
	
	private:
		Contact	_contacts[8];
		int	_input;
		int	_index;
};
