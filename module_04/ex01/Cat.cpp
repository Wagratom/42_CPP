/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:59:21 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/29 21:25:14 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat( void ) {
	std::cout << "Default contructor called Cat" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::~Cat() {
	std::cout << "Destructor called Cat" << std::endl;
	delete this->brain;
}

void	Cat::makeSound( void ) const {
	std::cout << "🐱" << ": miau miau" << std::endl;
}
