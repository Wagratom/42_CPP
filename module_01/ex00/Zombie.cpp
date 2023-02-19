/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:29:31 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/19 14:42:10 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie( void ) {
	std::cout << "Default construct called" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << _name <<": Destructor called" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name( std::string name) {
	_name = name;
}

std::string	Zombie::get_name( void ) {
	return (_name);
}
