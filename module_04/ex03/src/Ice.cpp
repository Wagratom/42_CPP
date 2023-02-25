/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:43:43 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/25 19:44:55 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>

Ice::Ice( void ) : AMateria("ice") {}

Ice::Ice( const Ice& obj ) : AMateria(obj) {}

Ice::~Ice( void ) {}

void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria*	Ice::clone( void ) const
{
	AMateria	*clone = new Ice;
	return (clone);
}

std::string const&	Ice::getType() const {
	return (this->_type);
}

Ice&	Ice::operator=(Ice const &obj) {
	this->_type = obj.getType();
	return (*this);
}