/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:17:50 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/22 12:20:33 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int	main(void)
{
	ClapTrap	luffy("Trafalgar ");
	ClapTrap	mingo("Doflamingo");

	luffy.printStatus();
	mingo.printStatus();

	luffy.attack("Doflamingo");
	mingo.takeDamage(luffy.getAttack());
	std::cout << std::endl;

	luffy.printStatus();
	mingo.printStatus();

	mingo.beRepaired(11);
	std::cout << std::endl;

	luffy.printStatus();
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

	luffy.printStatus();
	mingo.printStatus();


}