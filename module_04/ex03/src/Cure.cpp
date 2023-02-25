/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:43:43 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/24 16:44:13 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>

Cure::Cure( void ) : AMateria("cure") {}

Cure::Cure( const Cure& obj ) : AMateria(obj ) {}

Cure::~Cure( void ) {}

void	Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria*	Cure::clone( void ) const
{
	AMateria	*clone = new Cure();
	return (clone);
}