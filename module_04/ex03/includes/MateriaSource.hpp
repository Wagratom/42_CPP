/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 23:26:32 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/25 19:46:06 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <AMateria.hpp>
#include <IMateriaSource.hpp>

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource( const MateriaSource& obj);
		~MateriaSource( void );

		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);

		MateriaSource&	operator=(MateriaSource const &obj);

	private:
		AMateria*	_materia[4];
		int			_index;
};
