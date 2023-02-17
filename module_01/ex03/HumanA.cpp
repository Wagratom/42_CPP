/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:29:31 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/17 11:53:57 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon_type(weapon) {
	std::cout << "HumanA: Default constructor called" << std::endl;
}

HumanA::~HumanA( void ) {
	std::cout << "HumanA: Destructor called" << std::endl;
}

void	HumanA::attack( void ) {
	std::cout << _name << " attacks with their " << _weapon_type.getType() << std::endl;
}
