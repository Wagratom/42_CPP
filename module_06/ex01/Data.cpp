/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:34:14 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/03 10:43:15 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Data.hpp>

Data::Data( void ) : _name(""), _annotation("") {
	std::cout << "Default constructor called" << std::endl;
}

Data::Data( std::string name, std::string annotation )
: _name(name), _annotation(annotation)
{
	std::cout << "Default constructor called" << std::endl;
}

Data::Data( const Data& obj )
: _name(obj._name), _annotation(obj._annotation)
{
	std::cout << "Copy constructor called" << std::endl;
}

Data::~Data() {
	std::cout << "Destructor called" << std::endl;
}

std::string	Data::getName( void ) const {
	return (this->_name);
}
std::string	Data::getAnnotation( void ) const {
	return (this->_annotation);
}

uintptr_t	Data::serialize( Data* ptr )
{
	uintptr_t	pointer = reinterpret_cast<uintptr_t>(ptr);
	return (pointer);
}

Data*	Data::deserialize( uintptr_t raw )
{
	Data*	pointer = reinterpret_cast<Data*>(raw);
	return (pointer);
}

Data&	Data::operator=( const Data& obj )
{
	this->_name = obj.getName();
	this->_annotation = obj.getAnnotation();
	return (*this);
}

std::ostream&	operator<<( std::ostream& old, const Data& obj)
{
	old << "Name: " << obj.getName() << std::endl;
	old << "Frase: " << obj.getAnnotation() << std::endl;
	return (old);
}