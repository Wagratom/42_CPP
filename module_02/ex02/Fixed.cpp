/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:15:54 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/21 17:35:20 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int const Fixed::_fractional = 8;


/******************************************************************************/
/*                                 constructors                               */
/******************************************************************************/

Fixed::Fixed( void ) : _fixed(0) {
}

Fixed::Fixed( const int number ) {
	this->_fixed = number * 256;
}

Fixed::Fixed( const float number ) {
	this->_fixed = roundf(number * 256);
}

Fixed::Fixed( const Fixed& old ) {
	*this = old;
}

Fixed::~Fixed( void ) {
}

/******************************************************************************/
/*                              functions                                     */
/******************************************************************************/

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
	this->_fixed = old.getRawBits();
	return (*this);
}

/******************************************************************************/
/*                            comparison operators                            */
/******************************************************************************/

bool	Fixed::operator<( const Fixed& old) {
	return (this->_fixed < old._fixed);
}

bool	Fixed::operator>( const Fixed& old) {
	return (this->_fixed > old._fixed);
}

bool	Fixed::operator==( const Fixed& old) {
	return (this->_fixed == old._fixed);
}

bool	Fixed::operator<=( const Fixed& old) {
	return (this->_fixed <= old._fixed);
}

bool	Fixed::operator>=( const Fixed& old) {
	return (this->_fixed >= old._fixed);
}

bool	Fixed::operator!=( const Fixed& old) {
	return (this->_fixed != old._fixed);
}

/******************************************************************************/
/*                            arithmetic operators                            */
/******************************************************************************/

Fixed	Fixed::operator*( const Fixed& old)
{
	Fixed tmp((this->toFloat() * old.toFloat()));

	return (tmp);
}

Fixed	Fixed::operator/( const Fixed& old)
{
	Fixed tmp((this->toFloat() / old.toFloat()));

	return (tmp);
}

Fixed	Fixed::operator+( const Fixed& old)
{
	Fixed tmp((this->toFloat() + old.toFloat()));

	return (tmp	);
}

Fixed	Fixed::operator-( const Fixed& old)
{
	Fixed tmp((this->toFloat() - old.toFloat()));
	return (tmp);
}

/******************************************************************************/
/*                             increment/decrement                            */
/******************************************************************************/

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->_fixed += 1;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->_fixed -= 1;
	return (tmp);
}

Fixed	Fixed::operator++( void )
{
	this->_fixed += 1;
	return (*this);
}

Fixed	Fixed::operator--( void )
{
	this->_fixed -= 1;
	return (*this);
}

/******************************************************************************/
/*                               min and max                                  */
/******************************************************************************/

Fixed&	Fixed::max(Fixed& obj1, Fixed& obj2)
{
	if (obj2._fixed > obj1._fixed)
		return (obj2);
	return (obj1);
}

Fixed&	Fixed::min(Fixed& obj1, Fixed& obj2)
{
	if (obj2._fixed < obj1._fixed)
		return (obj2);
	return (obj1);
}

Fixed const&	Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	if (obj2._fixed > obj1._fixed)
		return (obj2);
	return (obj1);
}

Fixed const&	Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
	if (obj2._fixed < obj1._fixed)
		return (obj2);
	return (obj1);
}
