/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:52:23 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/24 15:25:59 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog( void ) : Animal("Dog") {
	std::cout << "Dog: Default constructor called" << std::endl;
	this->_brain = new Brain;
}

Dog::Dog( const Dog& obj ) : Animal(obj) {
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->type = obj.type;
}

Dog::~Dog( void ) {
	std::cout << "Dog: Destructor called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound( void ) const{
	std::cout << "🐶" << ": Au au" << std::endl;
}

std::string	Dog::getType( void ) const {
	return (this->type);
}

void	Dog::printIdeas( void ) const
{
	for (int i = 0; i < 100; i++) {
		std::cout << this->_brain->getBrain()[i] << std::endl;
	}
}

Dog&	Dog::operator=( const Dog& obj )
{
	this->type = obj.getType();
	*this->_brain = *obj._brain;
	return (*this);
}
