/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:49:06 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/23 17:03:53 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>


WrongAnimal::WrongAnimal( void ) : type("") {
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string _type ) : type(_type) {
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal( const WrongAnimal& obj ) : type(obj.type) {
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "❌" << ": WrongAnimal" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return (this->type);
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& obj)
{
	this->type = obj.getType();
	return (*this);
}