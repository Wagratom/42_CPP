/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:29:41 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/19 17:39:33 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie( std::string name );
		~Zombie( void );

		void	announce( void );

		std::string	get_name( void );

	private:
		std::string	_name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
