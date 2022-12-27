/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:09:22 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/27 10:37:47 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int const Fixed:: _fractionalbits = 8;

Fixed::Fixed( void ) : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(  const Fixed& old )
{
	 std::cout << "Copy constructor called\n";
	*this = old;
}

Fixed	&Fixed::operator=(Fixed const &old)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &old)
        this->setRawBits(old.getRawBits());
    return *this;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function calle" << std::endl;
	return (this->_fixed);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixed = raw;
}

