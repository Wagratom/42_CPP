/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:34:22 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/17 11:55:05 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB( std::string name ) : _name(name), _weapon_type(NULL) {
	std::cout << "HumanB: Default constructor called" << std::endl;
}

HumanB::~HumanB( void ) {
	std::cout << "HumanB: Destructor called" << std::endl;
}

void	HumanB::attack( void ) {
	std::cout << _name << " attacks with their " << _weapon_type->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon){
	_weapon_type = &weapon;
}
