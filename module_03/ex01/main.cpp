/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:17:50 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 10:29:53 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

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
	std::cout << std::endl;
}