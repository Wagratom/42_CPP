/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:29:31 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/17 11:49:14 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <Weapon.hpp>

class HumanA
{
	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA( void );

		void	attack( void );

	private:
		std::string	_name;
		Weapon&		_weapon_type;
};
