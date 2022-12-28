/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:09:22 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/27 19:11:30 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int const Fixed:: _fractionalbits = 8;

Fixed::Fixed( void ) : _fixed(0) {
}

Fixed::Fixed( int const value ) {
	this->_fixed = value << _fractionalbits;
}

Fixed::Fixed( float const value ) {
	this->_fixed = roundf(value * (float)(1 << _fractionalbits));
}

Fixed::Fixed(  const Fixed& old ) {
	*this = old;
}

Fixed::~Fixed( void ) {
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

Fixed	&Fixed::operator=(Fixed const &obj) {
	if (this != &obj)
		this->setRawBits(obj.getRawBits());
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
	out << obj.toFloat();
	return (out);
}
/******************************************************************************/

bool	Fixed::operator>(Fixed const &obj) {
	return this->_fixed > obj._fixed;
}

bool	Fixed::operator<(Fixed const &obj) {
	return this->_fixed < obj._fixed;
}

bool	Fixed::operator>=(Fixed const &obj) {
	return this->_fixed >= obj._fixed;
}

bool	Fixed::operator<=(Fixed const &obj) {
	return this->_fixed <= obj._fixed;
}

bool	Fixed::operator==(Fixed const &obj) {
	return this->_fixed == obj._fixed;
}

bool	Fixed::operator!=(Fixed const &obj) {
	return this->_fixed != obj._fixed;
}
/******************************************************************************/

Fixed	Fixed::operator+(Fixed const &obj) {
	Fixed temp (toFloat() + obj.toFloat());
	return (temp);
}
Fixed	Fixed::operator-(Fixed const &obj) {
	Fixed temp (toFloat() - obj.toFloat());
	return (temp);
}

Fixed	Fixed::operator*(Fixed const &src){
	Fixed temp (toFloat() * src.toFloat());
	return (temp);
}

Fixed	Fixed::operator/(Fixed const &obj) {
	Fixed temp (toFloat() / obj.toFloat());
	return (temp);
}

Fixed	Fixed::operator++( int )
{
	Fixed tmp = *this;

	this->_fixed += 1;
	return (tmp);
}

Fixed	Fixed::operator--( int )
{
	Fixed tmp = *this;

	this->_fixed -= 1;
	return (tmp);
}

Fixed&	Fixed::operator++( void )
{
	this->_fixed += 1;
	return (*this);
}

Fixed&	Fixed::operator--( void )
{
	this->_fixed -= 1;
	return (*this);
}

Fixed&	Fixed::min(Fixed &number1, Fixed &number2)
{
	if (number1._fixed< number2._fixed)
		return (number1);
	else if (number2._fixed < number1._fixed)
		return (number2);
	else
		std::cout << "past numbers are equal" << std::endl;
	return (number1);
}

Fixed const&	Fixed::min(Fixed const &number1, Fixed const &number2)
{
	if (number1._fixed < number2._fixed)
		return (number1);
	else if (number2._fixed < number1._fixed)
		return (number2);
	else
		std::cout << "past numbers are equal" << std::endl;
	return (number1);
}

Fixed&	Fixed::max(Fixed &number1, Fixed &number2)
{
	if (number1._fixed > number2._fixed)
		return (number1);
	else if (number2._fixed > number1._fixed)
		return (number2);
	else
		std::cout << "past numbers are equal" << std::endl;
	return (number1);
}

Fixed const&	Fixed::max(Fixed const &number1, Fixed const &number2)
{
	if (number1._fixed > number2._fixed)
		return (number1);
	else if (number2._fixed > number1._fixed)
		return (number2);
	else
		std::cout << "past numbers are equal" << std::endl;
	return (number1);
}
