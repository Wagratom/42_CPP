/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:29:37 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/25 19:38:45 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ICharacter.hpp>

class ICharacter;

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria( std::string const& type );
		AMateria( const AMateria& obj );
		virtual ~AMateria( void );

		std::string const&	getType() const; //Returns the materia type
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

		AMateria	&operator=(AMateria const &rhs);
};