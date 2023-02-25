/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:28:59 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/25 19:38:51 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ICharacter.hpp>
#include <AMateria.hpp>

class Character : public ICharacter
{
	public:
		Character( void );
		Character( std::string name );
		Character( const Character& obj );
		~Character( void );

		std::string const&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

		Character	&operator=(Character const &rhs);

	private:
		std::string	_name;
		AMateria*	inventory[4];
		int			_index;
};
