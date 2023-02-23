/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:09:32 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/23 08:52:35 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "Is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	std::cout << "King Kong: " << _name << " attacks " << target;
	std::cout << ", causing " << _AttackDamage << " points of damage!" << std::endl;
}