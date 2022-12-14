/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:36:34 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/14 17:22:38 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie() {
	std::cout << "called zombieHorde " << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << "destroyed zombieHorde " << std::endl;
}

void	Zombie::set_name( std::string name ) {
	this->name = name;
}

std::string	Zombie::get_name( void ) {
	return (name);
}

void	Zombie::announce( void )
{
	std::cout << get_name() << ": ";
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*		zombieHorde( int N, std::string name )
{
	Zombie *hord = new Zombie[N];
	for (int aux = 0; aux < N; aux++)
	{
		hord[aux].set_name( name );
		hord[aux].announce();
	}
	return (hord);
}

int main( void )
{
	Zombie *horde = zombieHorde(10, "programmer");
	delete[] horde;
}

