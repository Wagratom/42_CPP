/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 10:56:09 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/29 12:21:21 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>

int main( void )
{
	ScavTrap	franky_cyborg( "Franky" );
	FragTrap	Ussop( "Ussop" );
	ClapTrap	chopper("chopper");

	franky_cyborg.inspect( );
	Ussop.inspect();
	chopper.inspect();

	Ussop.attack( "Sugar" );
	franky_cyborg.attack( "Senor Pink" );
	chopper.attack( "Donquixote doflamingo" );
	std::cout <<std::endl;

	franky_cyborg.takeDamage(10);
	Ussop.takeDamage(10);
	chopper.takeDamage(10);
	std::cout <<std::endl;


	franky_cyborg.inspect( );
	Ussop.inspect();
	chopper.inspect();

	franky_cyborg.beRepaired(10);
	Ussop.beRepaired(10);
	chopper.beRepaired(10);

	franky_cyborg.inspect( );
	Ussop.inspect();
	chopper.inspect();

	Ussop.attack( "Sugar" );
	franky_cyborg.attack( "Senor Pink" );
	chopper.attack( "Donquixote doflamingo" );
	std::cout <<std::endl;

	return (0);
}
