/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:06:59 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/22 12:19:24 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	printStatus( void );
		int		getAttack( void );

	protected:
		std::string _name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;
};
