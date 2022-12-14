/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:36:34 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/14 15:51:59 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie( std::string name )
{
	this->name = name;
	std::cout << "called Zombie " << name << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "destroyed Zombie " << name << std::endl;
}

void	Zombie::set_name( std::string name )
{
	this->name = name;
}

std::string	Zombie::get_name( void )
{
	return (name);
}

void	Zombie::announce( void )
{
	std::cout << get_name() << ": ";
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*		newZombie( std::string name )
{
	return new Zombie( name );
}

void randomChump( std::string name )
{
	Zombie	new_zombie(name);
	new_zombie.announce();
}
