/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:59:21 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/29 21:25:02 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog( void ) {
	std::cout << "Default contructor called Dog" << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
}

Dog::~Dog() {
	std::cout << "Destructor called Dog" << std::endl;
	delete this->brain;
}

void	Dog::makeSound( void ) const {
	std::cout << "🐶" << ": au au" << std::endl;
}
