/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:52:23 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/23 17:16:30 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat: Default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& obj ) : WrongAnimal(obj) {
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	this->type = obj.type;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat: Destructor called" << std::endl;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "🐱" << ": Miaw miaw" << std::endl;
}

std::string	WrongCat::getType( void ) const {
	return (this->type);
}

WrongCat&	WrongCat::operator=( const WrongCat& obj)
{
	this->type = obj.getType();
	return (*this);
}