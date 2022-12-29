/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 14:22:53 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/29 14:32:54 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal( void ) {
	std::cout << "Default constructor called WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "destructor callled WrongAnimal" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal" << std::endl;
}
