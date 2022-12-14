/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:03:48 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/14 15:09:27 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.hpp>

int main()
{
	Zombie *ptr;

	ptr = newZombie( "programmer" );
	ptr->announce();
	delete	(ptr);

	randomChump( "Sauro" );
}
