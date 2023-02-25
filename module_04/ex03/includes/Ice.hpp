/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:42:47 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/25 19:45:16 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <AMateria.hpp>

class Ice : public AMateria
{
	public:
		Ice( void );
		Ice( const Ice& obj );
		~Ice( void );

		void			use(ICharacter& target);
		AMateria*		clone( void ) const;
		std::string const&	getType() const;

		Ice&	operator=(Ice const &obj);

};


