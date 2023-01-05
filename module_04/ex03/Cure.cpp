/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 10:47:06 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/01 13:12:34 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>

Cure::Cure( void ) : AMateria ( "Cure" )	{
	std::cout << "Default contructor called Cure" << std::endl;
}

Cure::~Cure() {
	std::cout << "Destructor Called" << std::endl;
}

AMateria*	Cure::clone() const{
	AMateria	*_new = new Cure;

	return (_new);
}

void		Cure::use(ICharacter& target){
	std::cout << "* shoots an cure bolt at " << target.getName() << " name> *";
}
