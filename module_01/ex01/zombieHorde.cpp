/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:36:34 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/14 17:36:36 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

void	set_name_orde( int N, std::string name, Zombie *hord )
{
	for (int aux = 0; aux < N; aux++)
	{
		hord[aux].set_name( name );
		hord[aux].announce();
	}


}
Zombie*		zombieHorde( int N, std::string name )
{
	Zombie *hord = new Zombie[N];
	set_name_orde(N, name, hord);
	return (hord);
}

