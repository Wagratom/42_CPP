/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:52:23 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/24 12:57:09 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat( void ) : Animal("Cat") {
	std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat( const Cat& obj ) : Animal(obj) {
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->type = obj.type;
}

Cat::~Cat( void ) {
	std::cout << "Cat: Destructor called" << std::endl;
}

void	Cat::makeSound( void ) const {
	std::cout << "🐱" << ": Miaw miaw" << std::endl;
}

std::string	Cat::getType( void ) const {
	return (this->type);
}

Cat&	Cat::operator=( const Cat& obj)
{
	this->type = obj.getType();
	return (*this);
}