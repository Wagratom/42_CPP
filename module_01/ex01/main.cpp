/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:36:34 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/22 15:56:26 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie*		zombieHorde( int N, std::string name );

int main( void )
{
	Zombie *horde = zombieHorde(5, "programmer");
	delete[] horde;
}

