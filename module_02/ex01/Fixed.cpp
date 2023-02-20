/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:15:54 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/20 11:41:06 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int const Fixed::_fractional = 8;


Fixed::Fixed( void ) : _fixed(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int number ) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = number * 256;
}

Fixed::Fixed( const float number ) {
	std::cout << "float constructor called" << std::endl;
	this->_fixed = roundf(number * 256);
}

Fixed::Fixed( const Fixed& old ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = old;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const {
	return (this->_fixed);
}

void 	Fixed::setRawBits( int const raw ) {
	this->_fixed = raw;
}

float	Fixed::toFloat( void ) const {
	return ((float)this->_fixed / (1 << this->_fractional));
}

int	Fixed::toInt( void ) const {
	return (this->_fixed / 256);
}

std::ostream&	operator<<(std::ostream& old, const Fixed& obj) {
	old << obj.toFloat();
	return (old);
}

Fixed&	Fixed::operator=( const Fixed& old){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed = old.getRawBits();
	return (*this);
}
