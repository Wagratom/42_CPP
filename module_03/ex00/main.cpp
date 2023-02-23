/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:17:50 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/22 12:22:10 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int	main(void)
{
	ClapTrap	trafalgar("Trafalgar ");
	ClapTrap	mingo("Doflamingo");

	trafalgar.printStatus();
	mingo.printStatus();

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
	mingo.beRepaired(11);
	mingo.beRepaired(11);
	std::cout << std::endl;

	trafalgar.printStatus();
	mingo.printStatus();


}