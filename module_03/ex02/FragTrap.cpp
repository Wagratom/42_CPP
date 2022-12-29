/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:31:00 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/29 12:10:56 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap( const std::string& target ) : ClapTrap(target) {
	this->_name = target;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap( void ) {
}

void	FragTrap::highFivesGuys ( void )
{

	std::cout << "let's give a \"high five\" to celebrate our victory, ";
	std::cout << "it was a tough fight, but thanks to me, the great warrior of the sea, we won.";
	std::cout << std::endl;
}
