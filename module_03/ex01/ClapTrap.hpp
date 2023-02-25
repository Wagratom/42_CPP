/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:06:59 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/25 17:25:48 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& obj);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	printStatus( void );
		bool	has_EnergyPoints( void );
		bool	is_alive( void );
		int		getAttack( void );
		void	setAttack( int attackDamage );

		ClapTrap&	operator=( const ClapTrap& old);

	protected:
		std::string _Name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;
};
