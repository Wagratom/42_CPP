/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 10:11:53 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/29 12:20:08 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "Default constructor called ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap( void ){
	std::cout << "Destructor called ClapTrap" << std::endl;
}

/*##############					ULTS						##############*/

bool	verify_EnergyPoints_repair( std::string name, int energyPoints )
{
	if (energyPoints > 0)
		return (true);
	std::cout << name << ": Failed repaired, zero EnergyPoints" << std::endl;
	return (false);
}

bool	verify_EnergyPoints_attack( std::string name, int energyPoints )
{
	if (energyPoints > 0)
		return (true);
	std::cout << name << ": Failed attack, zero EnergyPoints" << std::endl;
	return (false);
}

/*##############				ATTRIBUTES						################*/

void	ClapTrap::attack(const std::string& target) {
	if (this->_hitPoints <= 0)
	{
		std::cout << "A corpse cannot attack" << std::endl;
		return ;
	}
	if (!verify_EnergyPoints_attack(this->_name, this->_energyPoints))
		return ;
	std::cout << this->_name << " attacks " << target << " causing " << this->_attackDamage << std::endl;
	this->_energyPoints -= 1;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << this->_name;
		std::cout << ": Kind of late to try using repair, don't you think?" << std::endl;
		return ;
	}
	if (!verify_EnergyPoints_repair(this->_name, this->_energyPoints))
		return ;
	std::cout << this->_name << ": success max repaired " << amount << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << this->_name << ": Just took "<< amount <<" damage" << std::endl;
		this->_hitPoints -= amount;
		if (this->_hitPoints <= 0)
			std::cout << this->_name << ": dead" << std::endl;
	}
	else
		std::cout << "Dongrats you just attacked a dead body" << std::endl;
}

void	ClapTrap::inspect( void )
{
	std::cout << "inspect " << this->_name << std::endl;
	std::cout << "HP: " << this->_hitPoints << std::endl;
	std::cout << "E:  " << this->_energyPoints << std::endl;
	std::cout << "AD: " << this->_attackDamage << std::endl;
	std::cout << std::endl;
}
