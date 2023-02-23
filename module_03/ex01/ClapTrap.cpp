/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:06:59 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/23 08:30:26 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap: " << _name << " attacks " << target;
	std::cout << ", causing " << _AttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_HitPoints <= 0)
	{
		std::cout << "ClapTrap: You just tried to attack a corpse" << std::endl;
		return ;
	}
	std::cout << "ClapTrap: "<< _name << " Just took "<< amount << " damage" << std::endl;
	_HitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergyPoints <= 0)
	{
		std::cout << "Does not have energy points" << std::endl;
		return ;
	}
	if (amount + _HitPoints >= 10)
		amount = 10 - _HitPoints;
	std::cout << "Sucess: " << _name << " " << amount << " repaired hit points" << std::endl;
	_HitPoints += amount;
	_EnergyPoints -= 1;
}

void	ClapTrap::printStatus( void )
{
	std::cout << "\tstatus " << _name << std::endl << std::endl;
	std::cout << "HitPoints:    " << _HitPoints << std::endl;
	std::cout << "EnergyPoints: " << _EnergyPoints << std::endl;
	std::cout << "AttackDamage: " << _AttackDamage << std::endl;
	std::cout << std::endl;

}

int		ClapTrap::getAttack( void ) {
	return (this->_AttackDamage);
}
