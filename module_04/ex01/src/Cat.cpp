/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:52:23 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/24 15:24:08 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat( void ) : Animal("Cat") {
	std::cout << "Cat: Default constructor called" << std::endl;
	this->_brain = new Brain;
}

Cat::Cat( const Cat& obj ) : Animal(obj) {
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->type = obj.type;
}

Cat::~Cat( void ) {
	std::cout << "Cat: Destructor called" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound( void ) const {
	std::cout << "🐱" << ": Miaw miaw" << std::endl;
}

std::string	Cat::getType( void ) const {
	return (this->type);
}

void	Cat::printIdeas( void ) const
{
	for (int i = 0; i < 100; i++) {
		std::cout << this->_brain->getBrain()[i] << std::endl;
	}

}

Cat&	Cat::operator=( const Cat& obj)
{
	this->_brain = obj._brain;
	this->type = obj.getType();
	return (*this);
}
