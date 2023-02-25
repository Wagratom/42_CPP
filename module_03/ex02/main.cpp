/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:17:50 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/25 18:19:34 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>
void	main_passed(void)
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

	mingo.beRepaired(2);
	std::cout << std::endl;

	trafalgar.printStatus();
	mingo.printStatus();

	mingo.beRepaired(0);
	mingo.beRepaired(0);
	mingo.beRepaired(0);
	mingo.beRepaired(0);
	mingo.beRepaired(0);
	mingo.beRepaired(0);
	mingo.beRepaired(0);
	mingo.beRepaired(0);
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

void	main_passed1(void)
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
	std::cout << std::endl;

	// main_passed();
}

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

	// main_passed1();
}