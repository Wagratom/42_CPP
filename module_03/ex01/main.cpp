/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:17:50 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/23 08:30:15 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

int	main(void)
{
	ClapTrap	mingo("Doflamingo");
	ScavTrap	luffy("Luffy");

	luffy.printStatus();
	mingo.printStatus();

	luffy.attack("Doflamingo");
	mingo.takeDamage(luffy.getAttack());
	mingo.takeDamage(luffy.getAttack());
	std::cout << std::endl;

	luffy.printStatus();
	mingo.printStatus();

	mingo.beRepaired(30);

	luffy.printStatus();
	mingo.printStatus();
}