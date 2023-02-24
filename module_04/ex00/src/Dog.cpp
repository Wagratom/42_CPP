/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:52:23 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/23 18:40:42 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog( void ) : Animal("Dog") {
	std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog( const Dog& obj ) : Animal() {
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->type = obj.type;
}

Dog::~Dog( void ) {
	std::cout << "Dog: Destructor called" << std::endl;
}

void	Dog::makeSound( void ) const{
	std::cout << "🐶" << ": Au au" << std::endl;
}

std::string	Dog::getType( void ) const {
	return (this->type);
}

Dog&	Dog::operator=( const Dog& obj)
{
	this->type = obj.getType();
	return (*this);
}