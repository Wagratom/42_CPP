/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:09:15 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/29 11:34:02 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCANVTRAP_H
# define SCANVTRAP_H

#include <ClapTrap.hpp>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(  const std::string& target );
		~ScavTrap( void );

		void	attack(const std::string& target);
		void	guardGate();

	private:

};

#endif
