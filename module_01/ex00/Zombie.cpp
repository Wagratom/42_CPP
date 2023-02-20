/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:29:31 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/19 17:44:41 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie( std::string name ) : _name(name) {
	std::cout << "Default construct called" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << _name <<": Destructor called" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
