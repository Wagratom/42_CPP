/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 14:22:53 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/29 14:36:30 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat( void ) {
	std::cout << "Default constructor called WrongCat" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "destructor callled WrongCat" << std::endl;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "WrongCat" << std::endl;
}
