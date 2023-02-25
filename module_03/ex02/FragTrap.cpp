/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 08:32:04 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/25 17:57:09 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	std::cout << "FragTrap: Default constructor called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj._Name)
{
	this->_HitPoints = obj._HitPoints;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_AttackDamage = obj._AttackDamage;
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap: Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << _Name << ": HighFivesGuys" << std::endl;

}

void	FragTrap::attack(const std::string& target)
{
	if (!has_EnergyPoints())
		return ;
	if (!is_alive())
		return ;
	std::cout << "Serious Cut: " << _Name << " attacks " << target;
	std::cout << ", causing " << _AttackDamage << " points of damage!" << std::endl;
	_EnergyPoints -= 1;
}

FragTrap&	FragTrap::operator=( const FragTrap& old)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_Name = old._Name;
	this->_AttackDamage = old._AttackDamage;
	this->_EnergyPoints = old._EnergyPoints;
	this->_HitPoints = old._HitPoints;
	return (*this);
}