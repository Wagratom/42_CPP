/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:17:50 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/25 17:46:18 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

void	main_passed( void )
{
	ClapTrap	trafalgar("Trafalgar ");
	ClapTrap	mingo("Doflamingo");

	trafalgar.printStatus();
	mingo.printStatus();

	trafalgar.setAttack(2);

	trafalgar.attack("Doflamingo");
	mingo.takeDamage(trafalgar.getAttack());
	std::cout << std::endl;

	trafalgar.printStatus();
	mingo.printStatus();

	mingo.beRepaired(11);
	std::cout << std::endl;

	trafalgar.printStatus();
	mingo.printStatus();

	mingo.beRepaired(11);
	mingo.beRepaired(11);
	mingo.beRepaired(11);
	mingo.beRepaired(11);
	mingo.beRepaired(11);
	mingo.beRepaired(11);
	mingo.beRepaired(11);
	mingo.beRepaired(11);
	std::cout << std::endl;

	trafalgar.printStatus();
	mingo.printStatus();

	mingo.setAttack(10);
	mingo.attack("Trafalgar");
	trafalgar.takeDamage(mingo.getAttack());

	mingo.attack("Trafalgar");
	trafalgar.beRepaired(10);
	trafalgar.attack("Doflamingo");
	trafalgar.printStatus();
	mingo.printStatus();

	mingo.beRepaired(10);
}

void	Gomu_Gomu_no_Gatling_Gun( ScavTrap& luffy, ClapTrap& mingo )
{
	for (int i = 0; i < 50; i++)
	{
		luffy.attack("Doflamingo");
		mingo.takeDamage(luffy.getAttack());
	}
	luffy.attack("Doflamingo");
}

int	main(void)
{
	ClapTrap	mingo("Doflamingo");
	ClapTrap	pdf("Pdf");

	ScavTrap	luffy("Luffy");

	luffy.printStatus();
	mingo.printStatus();
	Gomu_Gomu_no_Gatling_Gun(luffy, mingo);

	std::cout << std::endl;
	// pdf.attack(" regua ");
	std::cout << std::endl;

	luffy.printStatus();
	mingo.printStatus();

	mingo.beRepaired(30);

	luffy.printStatus();
	mingo.printStatus();

	luffy.guardGate();

	// main_passed();
}