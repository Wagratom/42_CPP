/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:17:50 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 10:30:23 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>

void	serios_cut( FragTrap &shanks, FragTrap &teach )
{
	for (int i = 0; i < 99; i++)
	{
		shanks.attack("teach");
		teach.takeDamage(shanks.getAttack());
		teach.beRepaired(30);
	}
	shanks.attack("teach");
	teach.beRepaired(30);
	teach.beRepaired(30);
}

int	main(void)
{
	ClapTrap	mingo("Doflamingo");
	ScavTrap	luffy("Luffy");
	FragTrap	shanks("Shanks");
	FragTrap	Teach("teach");

	shanks.printStatus();
	luffy.printStatus();
	mingo.printStatus();

	// mingo.attack(" regua ");
	luffy.attack("Doflamingo");
	mingo.takeDamage(luffy.getAttack());
	shanks.attack("teach");
	Teach.takeDamage(shanks.getAttack());

	std::cout << std::endl;

	luffy.printStatus();
	mingo.printStatus();
	shanks.printStatus();
	Teach.printStatus();

	mingo.beRepaired(30);

	luffy.guardGate();
	shanks.highFivesGuys();

	std::cout << std::endl;

	serios_cut(shanks, Teach);
	shanks.printStatus();
	Teach.printStatus();
}