/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:42:47 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/24 16:43:08 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <AMateria.hpp>

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure( const Cure& obj );
		~Cure( void );

		void				use(ICharacter& target);
		AMateria*			clone( void ) const;
		std::string const&	getType() const;

};
