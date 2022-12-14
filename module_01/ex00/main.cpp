/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:03:48 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/14 17:39:43 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Zombie.hpp>

Zombie*		newZombie( std::string name );
void		randomChump( std::string name );

int main()
{
	Zombie *ptr;

	ptr = newZombie( "programmer" );
	ptr->announce();
	randomChump( "Sauro" );
	delete	(ptr);
}
