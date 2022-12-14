/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:36:34 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/14 17:24:00 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string.h>

class Zombie
{
	public:
		Zombie( std::string name );
		~Zombie( void );

		Zombie*		newZombie( std::string name );
		void		announce( void );
		void		 randomChump( std::string name );

		std::string	get_name( void );
	private:
		std::string name;

};

#endif
