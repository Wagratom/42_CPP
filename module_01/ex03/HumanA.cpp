/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:20:23 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/15 21:21:59 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA(std::string name, Weapon weapon) : _name(name), _weapon(weapon)
{
	std::cout << "called HumanA " << name  << " how Weapon " << _weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "destroyed HumanA " << _name << std::endl;
}

void	HumanA::attack( void )
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
