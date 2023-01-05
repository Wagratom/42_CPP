/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 09:56:36 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/31 12:16:18 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

AMateria::AMateria(std::string const & type) : _type( type) {
	std::cout << "Default constructor called AMateria" << std::endl;
}

AMateria::~AMateria( void ) {
	std::cout << "Destrucotr called" << std::endl;
}

std::string const& AMateria::getType() const {
	return (this->_type);
}

void		AMateria::use(ICharacter& target){
}
