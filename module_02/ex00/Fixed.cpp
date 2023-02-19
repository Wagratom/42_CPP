/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:15:54 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/18 16:00:01 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

Fixed::Fixed( void ) : _number(0) {
	std::cout << "Default constrctor called" << std::endl;
}

Fixed::Fixed( const Fixed& old ) : _number(old._number) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=( const Fixed& old){
	this->_number = old._number;
	return (*this);
}
