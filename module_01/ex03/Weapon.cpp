/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:53:01 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/15 16:01:12 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon( std::string type )
{
	std::cout << "called Weapon " << type << std::endl;
}

Weapon::~Weapon( void )
{
	std::cout << "destroyed Weapon " << type << std::endl;
}

const std::string& Weapon::getType( void )
{
	return type;
}

void Weapon::setType( std::string type)
{
	this->type = type;
}
