/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:49:06 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/28 09:49:30 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>


Animal::Animal( void ) : type(""){
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal( std::string _type ) : type(_type) {
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal( const Animal& obj ) : type(obj.type) {
	std::cout << "Animal: Copy constructor called" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal: Destructor called" << std::endl;
}

void	Animal::makeSound( void ) const {
	std::cout << "❌" << ": Not song" << std::endl;
}

std::string	Animal::getType( void ) const {
	return (this->type);
}

Animal&	Animal::operator=( const Animal& obj)
{
	this->type = obj.getType();
	return (*this);
}