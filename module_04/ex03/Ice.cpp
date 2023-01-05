/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 10:47:06 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/01 13:12:41 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>

Ice::Ice( void ) : AMateria ( "Ice" )	{
	std::cout << "Default contructor called Ice" << std::endl;
}

Ice::~Ice() {
	std::cout << "Destructor Called" << std::endl;
}

AMateria*	Ice::clone() const{
	AMateria	*_new = new Ice;

	return (_new);
}

void		Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " name> *";
}
