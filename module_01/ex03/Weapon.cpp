/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:16:25 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/17 11:53:13 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon( std::string _type ) : type(_type) {
	std::cout << "Weapon: Default constructor called" << std::endl;
}

Weapon::~Weapon( void ) {
	std::cout << "Weapon: Destructor called" << std::endl;
}

std::string&	Weapon::getType( void ){
	return (this->type);
}

void	Weapon::setType( std::string _type) {
	this->type = _type;
}
