/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:17:50 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/25 18:12:50 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int	main(void)
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