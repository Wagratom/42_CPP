/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:28:29 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/16 17:22:57 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie*	zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombie[i].set_name(name);
		zombie[i].announce();
	}
	return (zombie);
}
