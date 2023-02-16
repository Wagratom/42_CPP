/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:02:46 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/15 22:59:51 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

Contact::Contact(/* args */) {
}

Contact::~Contact() {
}

void	Contact::set_firstName( std::string firstName ) {
	_first_name = firstName;
}

void	Contact::set_lastName( std::string lastName ) {
	_last_name = lastName;
}

void	Contact::set_nickname( std::string nickname ) {
	_nickname = nickname;
}

void	Contact::set_phoneNumber( std::string phoneNumber ) {
	_phone_number = phoneNumber;
}

void	Contact::set_darkSecret( std::string darkSecret ) {
	_dark_secret = darkSecret;
}

std::string	Contact::get_firstName( void ) {
	return (_first_name);
}

std::string	Contact::get_lastName( void ) {
	return (_last_name);
}

std::string	Contact::get_nickname( void ) {
	return (_nickname);
}

std::string	Contact::get_phoneNumber( void ) {
	return (_phone_number);
}

std::string	Contact::get_darkSecret( void ) {
	return (_dark_secret);
}
