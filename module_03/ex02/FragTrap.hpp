/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 08:32:04 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/23 08:54:04 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ClapTrap.hpp>

class FragTrap : public ClapTrap
{
	public:
		FragTrap( std::string name );
		~FragTrap( void );

		void	attack(const std::string& target);
		void highFivesGuys(void);
};
