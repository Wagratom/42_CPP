/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 10:56:09 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/29 11:13:03 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

int main( void )
{
	ClapTrap	barbarian("barbarian");
	ScavTrap	franky_cyborg( "Franky" );

	franky_cyborg.inspect( );
	barbarian.inspect();

	franky_cyborg.attack( "Senor Pink" );
	barbarian.attack( "archer" );
	barbarian.takeDamage( 9 );
	barbarian.inspect();

	barbarian.beRepaired(8);
	barbarian.inspect();

	barbarian.takeDamage( 9 );
	barbarian.inspect();

	barbarian.attack( "archer" );
	barbarian.beRepaired(10);
	barbarian.takeDamage(10);

	return (0);
}
