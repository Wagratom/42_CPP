/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:00:41 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/02 15:34:29 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Conversion.hpp>

Conversion::Conversion( void ) {
	std::cout << "Default constructor called" << std::endl;
}

Conversion::Conversion( std::string number )
: _number(number), _nInteger(0), _has_science(false) {
	std::cout << "Default constructor called" << std::endl;
	is_science_number();
}

Conversion::Conversion( const Conversion& obj )
: _number(obj._number), _nInteger(obj._nInteger), _has_science(obj._has_science) {
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
/*                      Check Convertion To Integer                           */
/******************************************************************************/

bool	check_overflow( std::string number)
{
	if (std::atol(number.c_str()) > 2147483647)
		return (true);
	if (std::atol(number.c_str()) < -2147483648)
		return (true);
	else
		return (false);
}

bool	Conversion::check_convertion_to_integer( void )
{
	if (this->_has_science)
		return (false);
	if (check_overflow(this->_number))
		return (false);
	this->_nInteger = std::strtol(this->_number.c_str(), NULL, 10);
	return (true);
}

/******************************************************************************/
/*                               Convert char                                  */
/******************************************************************************/
void	Conversion::Conversion_numbet_to_char( void )
{

	if (!check_convertion_to_integer())
		std::cout << "char: Non displayable" << std::endl;
	else if (this->_nInteger < 32 || this->_nInteger >= 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << (char)this->_nInteger << std::endl;
}

/******************************************************************************/
/*                               Convert Int                                  */
/******************************************************************************/

void	Conversion::Conversion_numbet_to_int( void )
{
	if (!check_convertion_to_integer())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << this->_nInteger << std::endl;
}

/******************************************************************************/
/*                               Convert float                                */
/******************************************************************************/

bool Conversion::is_float_science( void )
{
	if (std::isnan(this->_nFloat))
		std::cout << "nan";
	else if (std::isinf(this->_nFloat))
		std::cout << "inf";
	else
		return (false);
	return (true);
}

bool	Conversion::write_fractional_numbers( void )
{
	this->_nFloat = std::atof(this->_number.c_str());
	if (is_float_science())
		return (false);
	this->_nFloat = std::atof(this->_number.c_str());
	return (true);
}

void	Conversion::Conversion_numbet_to_float( void )
{
	std::cout << "float: ";
	if (write_fractional_numbers())
		std::cout << this->_nFloat;
	std::cout << "f" << std::endl;
}

void	Conversion::Conversion_numbet_to_double( void )
{
	std::cout << "double: ";
	if (write_fractional_numbers())
		std::cout << static_cast<double>(this->_nFloat);
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
	_nInteger = obj._nInteger;
	return (*this);
}