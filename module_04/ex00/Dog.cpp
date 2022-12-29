/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:59:21 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/29 14:06:59 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog( void ) {
	std::cout << "Default contructor called Dog" << std::endl;
	this->type = "Dog";
}

Dog::~Dog() {
	std::cout << "Destructor called Dog" << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "🐶" << ": au au" << std::endl;
}
