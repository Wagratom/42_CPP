/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:00:41 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/01 14:13:29 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Conversion.hpp>

Conversion::Conversion( void ) {
	std::cout << "Default constructor called" << std::endl;
}

Conversion::Conversion( std::string number )
: _number(number), _integer(""), _has_science(false) {
	std::cout << "Default constructor called" << std::endl;
	is_science_number();
}

Conversion::Conversion( const Conversion& obj )
: _number(obj._number), _integer(obj._integer), _has_science(obj._has_science) {
	std::cout << "Copy constructor called" << std::endl;
}

Conversion::~Conversion( void ) {
	std::cout << "Destructor called" << std::endl;
}

/******************************************************************************/
/*                               Valid Number                                 */
/******************************************************************************/

void	Conversion::is_science_number( void )
{
	if (this->_number == "-inff" || this->_number == "+inff")
		this->_has_science = true;
	if (this->_number == "-inf" || this->_number == "+inf")
		this->_has_science = true;
	if ( this->_number == "nanf" || this->_number == "nan")
		this->_has_science = true;
}

bool	Conversion::valid_number( void )
{
	int	index = -1;
	int	point = 0;
	int	f = 0;

	if (this->_number[index + 1] == '-' || this->_number[++index] == '+')
		index++;
	while (this->_number[++index])
	{
		if (this->_number[index] >= '0' && this->_number[index] <= '9')
			continue ;
		if (this->_number[index] == '.' && point++ == 0)
			continue ;
		if (this->_number[index] == 'f' && f++ == 0 && point == 1)
			continue ;
		std::cout << "Error: Argument passed and not number" << std::endl;
		return (false);
	}
	return (true);
}

/******************************************************************************/
/*                               Convert Char                                 */
/******************************************************************************/

void	Conversion::Conversion_numbet_to_char( void )
{
	int		value;
	char	*endptr;

	if (this->_has_science)
		std::cout << "char: impossible" << std::endl;
	else
	{
		value = std::strtol(this->_number.c_str(), &endptr, 10);
		if (value < 32 || value >= 127)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: " << (char)value << std::endl;
	}
}

/******************************************************************************/
/*                               Convert Int                                  */
/******************************************************************************/

void	Conversion::Conversion_numbet_to_int( void )
{
	int		value;
	char	*endptr;

	if (this->_has_science)
		std::cout << "char: impossible" << std::endl;
	else
	{
		errno = 0;
		value = std::strtol(this->_number.c_str(), &endptr, 10);
		std::cout << errno << "esse " << endptr << std::endl;
		if (errno == ERANGE)
			std::cout << "teste: impossible" << std::endl;
		std::cout << "int: " << value << std::endl;
	}
}

/******************************************************************************/
/*                               Convert float                                */
/******************************************************************************/

bool Conversion::is_float_science( float number )
{
	if (std::isnan(number))
		std::cout << "nan";
	else if (std::isinf(number))
		std::cout << "inf";
	else
		return (false);
	return (true);
}

void	Conversion::write_fractional_numbers( void )
{
	float	value;

	value = std::atof(this->_number.c_str());
	if (is_float_science(value))
		return ;
	value = std::atof(this->_number.c_str());
	std::cout << value;
}

void	Conversion::Conversion_numbet_to_float( void )
{
	std::cout << "float: ";
	write_fractional_numbers();
	std::cout << "f" << std::endl;
}

void	Conversion::Conversion_numbet_to_double( void )
{
	std::cout << "double: ";
	write_fractional_numbers();
	std::cout << std::endl;
}

void	Conversion::run_conversion( void )
{
	if (this->_has_science == false && !valid_number())
		return ;
	Conversion_numbet_to_char();
	Conversion_numbet_to_int();
	Conversion_numbet_to_float();
	Conversion_numbet_to_double();
}

Conversion&	Conversion::operator=( const Conversion& obj)
{
	_number = obj._number;
	_integer = obj._integer;
	return (*this);
}