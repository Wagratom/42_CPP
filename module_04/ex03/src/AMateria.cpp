/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:33:38 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/25 15:19:53 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

AMateria::AMateria( std::string const& type ) : _type(type) {}

AMateria::AMateria( const AMateria& obj ) : _type(obj._type) {}

AMateria::~AMateria( void ) {}

std::string const&	AMateria::getType() const {
	return (this->_type);
}

void	AMateria::use(ICharacter& target) {
	std::cout << "Este e o use da materia" << target.getName() << std::endl;
}
