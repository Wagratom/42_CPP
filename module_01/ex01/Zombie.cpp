/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:36:34 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/14 15:08:19 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>


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
	Zombie	*ptr = new Zombie;

	ptr->set_name(name);
	return (ptr);
}

void randomChump( std::string name )
{
	Zombie	new_zombie;
	new_zombie.set_name(name);
	new_zombie.announce();
}
