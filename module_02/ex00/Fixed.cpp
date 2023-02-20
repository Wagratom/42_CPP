/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:15:54 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/20 10:11:43 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

static const int _fixed = 8;

Fixed::Fixed( void ) : _number(0) {
	std::cout << "Default constrctor called" << std::endl;
}

Fixed::Fixed( const Fixed& old ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = old;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_number);
}

void 	Fixed::setRawBits( int const raw ) {
	this->_number = raw;
}

Fixed&	Fixed::operator=( const Fixed& old){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_number = old.getRawBits();
	return (*this);
}
