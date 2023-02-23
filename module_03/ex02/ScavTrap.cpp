/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:09:32 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/23 10:57:48 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj._Name)
{
	this->_HitPoints = obj._HitPoints;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_AttackDamage = obj._AttackDamage;
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "Is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	std::cout << "King Kong: " << _Name << " attacks " << target;
	std::cout << ", causing " << _AttackDamage << " points of damage!" << std::endl;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& old)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_Name = old._Name;
	this->_AttackDamage = old._AttackDamage;
	this->_EnergyPoints = old._EnergyPoints;
	this->_HitPoints = old._HitPoints;
	return (*this);
}
