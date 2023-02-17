/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:18:59 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/16 16:25:18 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int main( void )
{
	Zombie*	zombie;

	zombie = newZombie( "Cordyceps" );
	zombie->announce();

	randomChump( "Radon");
	delete zombie;
	return (0);
}
