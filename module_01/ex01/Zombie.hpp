/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:29:41 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/16 16:49:57 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie( void );
		~Zombie( void );

		void	announce( void );

		void		set_name(std::string name);
		std::string	get_name( void );

	private:
		std::string	_name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );
