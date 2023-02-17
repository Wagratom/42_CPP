/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:18:59 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/17 10:15:04 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int main( void )
{
	// Zombie*	zombie;
	Zombie*	horder;

	// zombie = newZombie( "Cordyceps" );
	// zombie->announce();

	// randomChump( "Radon");
	horder = zombieHorde(5, "Horder");

	// delete zombie;
	delete[] horder;
	return (0);
}
