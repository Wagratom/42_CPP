/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:51:40 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/15 16:01:40 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		// HumanA bob("Bob", club);
		// bob.attack();
		// club.setType("some other type of club");
		// bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		// HumanB jim("Jim");
		// jim.setWeapon(club);
		// jim.attack();
		// club.setType("some other type of club");
		// jim.attack();
	}
	return 0;
}
