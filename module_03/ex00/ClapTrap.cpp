/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:06:59 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/25 18:09:33 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoints(10), _EnergyPoints(10),
_AttackDamage(0) {
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj) : _Name(obj._Name), _HitPoints(obj._HitPoints),
_EnergyPoints(obj._EnergyPoints), _AttackDamage(obj._AttackDamage) {
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

bool	ClapTrap::has_EnergyPoints( void )
{
	if (_EnergyPoints > 0)
		return (true);
	std::cout << _Name << ": Does not have energy points" << std::endl;
	return (false);
}

bool	ClapTrap::is_alive( void )
{
	if (_HitPoints > 0)
		return (true);
	std::cout << "A corpse can't do much" << std::endl;
	return (false);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!has_EnergyPoints())
		return ;
	if (!is_alive())
		return ;
	std::cout << "ClapTrap: " << _Name << " attacks " << target;
	std::cout << ", causing " << _AttackDamage << " points of damage!" << std::endl;
	_EnergyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoints <= 0)
	{
		std::cout << "You just tried to attack a corpse" << std::endl;
		return ;
	}
	std::cout << "ClapTrap: "<< _Name << " Just took "<< amount << " damage" << std::endl;
	_HitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!has_EnergyPoints())
		return ;
	if (!is_alive())
		return ;
	std::cout << "Sucess: " << _Name << " " << amount << " repaired hit points" << std::endl;
	_HitPoints += amount;
	_EnergyPoints -= 1;
}

void	ClapTrap::printStatus( void )
{
	std::cout << "\tstatus " << _Name << std::endl << std::endl;
	std::cout << "HitPoints:    " << _HitPoints << std::endl;
	std::cout << "EnergyPoints: " << _EnergyPoints << std::endl;
	std::cout << "AttackDamage: " << _AttackDamage << std::endl;
	std::cout << std::endl;

}

int		ClapTrap::getAttack( void ) {
	return (this->_AttackDamage);
}

void	ClapTrap::setAttack( int attackDamage ) {
	 this->_AttackDamage = attackDamage;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& old){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_Name = old._Name;
	this->_AttackDamage = old._AttackDamage;
	this->_EnergyPoints = old._EnergyPoints;
	this->_HitPoints = old._HitPoints;
	return (*this);
}