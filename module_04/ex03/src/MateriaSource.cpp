/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 23:26:32 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/25 20:07:18 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MateriaSource.hpp>

MateriaSource::MateriaSource( void ) : _index(0)
{
	for (int i = 0; i < 4; i++) {
		this->_materia[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource& obj ) {
	*this = obj;
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL)
		{
			delete this->_materia[i];
			this->_materia[i] = NULL;
		}
	}
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (this->_index <= 3)
	{
		this->_materia[_index] = m;
		_index++;
	}
	else
		std::cout << "learnMateria: Failed: 4 subjects already learned" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
			break ;
		if (this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	std::cout << "type is unknown" << std::endl;
	return (0);
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &obj)
{
	this->_index = obj._index;
	for (int i = 0; i < 4; i++)
	{
		this->_materia[i] = obj._materia[i];
	}
	return (*this);
}
