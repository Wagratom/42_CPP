/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:53:01 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/15 20:31:28 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
	public:
		Weapon( std::string type);
		~Weapon( void );

		const std::string&	getType( void );
		void				setType( std::string type);

	private:
		std::string _type;

};

#endif
