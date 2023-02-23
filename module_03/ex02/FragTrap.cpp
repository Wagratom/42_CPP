/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 08:32:04 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/23 08:56:05 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	std::cout << "FragTrap: Default constructor called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap: Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void) {

}

void	FragTrap::attack(const std::string& target) {
	std::cout << "Serious Cut: " << _name << " attacks " << target;
	std::cout << ", causing " << _AttackDamage << " points of damage!" << std::endl;
}