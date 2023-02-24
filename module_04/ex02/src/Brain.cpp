/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:27:28 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/24 15:32:21 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain( void ) {
	std::cout << "Brain: Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++){
		this->_ideas[i] = "idea";
	}
}

Brain::Brain( const Brain& obj ) : _ideas(obj._ideas) {
	std::cout << "Brain: Copy constructor called" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Brain:  Destructor called" << std::endl;
}

std::string*	Brain::getBrain( void ) {
	return (this->_ideas);
}

Brain&	Brain::operator=( const Brain& obj)
{
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = obj._ideas[i];
	}
	return (*this);
}
