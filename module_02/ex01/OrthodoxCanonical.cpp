/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OrthodoxCanonical.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:09:22 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/26 22:24:12 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <OrthodoxCanonical.hpp>

int const Fixed:: _fractionalbits = 8;

Fixed::Fixed( void ) : _fixed(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const value )
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = value << _fractionalbits;
}

Fixed::Fixed( float const value )
{
	std::cout << "Float constructor called" << std::endl;
	_fixed = roundf(value * (float)(1 << _fractionalbits));
}

Fixed::Fixed(  const Fixed& old )
{
	 std::cout << "Copy constructor called\n";
	*this = old;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	return (this->_fixed);
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixed = raw;
}

float	Fixed::toFloat(void) const {
	return (this->_fixed / (float)(1 << _fractionalbits));
}

int	Fixed::toInt(void) const {
	return (this->_fixed >> this->_fractionalbits);
}

Fixed	&Fixed::operator=(Fixed const &old)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &old)
        this->setRawBits(old.getRawBits());
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
	out << obj.toFloat();
	return (out);
}
