/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:17:50 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/24 11:45:10 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>

int	main(void)
{
	ClapTrap	mingo("Doflamingo");
	ScavTrap	luffy("Luffy");
	FragTrap	shanks("Shanks");
	FragTrap	Teach("teach");

	luffy.printStatus();
	mingo.printStatus();
	shanks.printStatus();

	luffy.attack("Doflamingo");
	// mingo.attack(" regua ");
	mingo.takeDamage(luffy.getAttack());
	shanks.attack("teach");
	Teach.takeDamage(shanks.getAttack());

	std::cout << std::endl;

	luffy.printStatus();
	mingo.printStatus();
	shanks.printStatus();
	Teach.printStatus();

	mingo.beRepaired(30);

	luffy.printStatus();
	mingo.printStatus();

	luffy.guardGate();
	shanks.highFivesGuys();
}