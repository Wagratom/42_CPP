/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 10:56:09 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/28 15:34:20 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int main( void )
{
	ClapTrap barbarian("barbarian");

	barbarian.inspect();

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
