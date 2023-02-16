/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:26:31 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/16 11:39:15 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <Contact.hpp>

class PhoneBook
{
	public:
		PhoneBook( void );
		~PhoneBook();

		int			get_input( void );
		int			get_valid_input( void );

		void		handle_input( void );

		void		add_contact( void );
		std::string	get_data(const char *msg);

		void		interactor_variables( void );

		void		search_contacts( void );
		void		print_str( std::string str );
		void		print_selected_ctd( std::string msg );
	private:
		Contact	_contacts[8];
		int	_input;
		int	_index;
		int	_size;
};
