/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:09:15 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/29 11:34:13 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap(  const std::string& target) : ClapTrap( target ){
	this->_name = target;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Default constructor called ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "Destructor called ScavTrap" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "Gate keeper mode Atived" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_hitPoints <= 0)
	{
		std::cout << "A corpse cannot attack" << std::endl;
		return ;
	}
	if (!verify_EnergyPoints_attack(this->_name, this->_energyPoints))
		return ;
	std::cout << this->_name << "! Iron Boxing!!!: POW POW POW BAM BAM BAM... ";
	std::cout << target << " took " << this->_attackDamage << " damage" << std::endl;
	this->_energyPoints -= 1;
}
