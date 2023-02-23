/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:15:54 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/22 09:31:22 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int const Fixed::_fractional = 8;

Fixed::Fixed( void ) : _fixed(0) {
	std::cout << "Default constructor called" << std::endl;
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
	return (this->_fixed);
}

void 	Fixed::setRawBits( int const raw ) {
	this->_fixed = raw;
}

Fixed&	Fixed::operator=( const Fixed& old){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed = old.getRawBits();
	return (*this);
}
