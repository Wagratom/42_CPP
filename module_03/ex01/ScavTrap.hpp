/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:09:32 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/23 10:36:06 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ClapTrap.hpp>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& obj );
		~ScavTrap( void );

		void	attack(const std::string& target);
		void	 guardGate( void );

		ScavTrap&	operator=( const ScavTrap& old);

};

