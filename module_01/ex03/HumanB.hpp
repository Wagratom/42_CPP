/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:20:40 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/16 10:40:34 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

class HumanB
{
	public:
		HumanB( std::string name );
		~HumanB( void );

		void    setWeapon(Weapon &weapon);
		void	attack( void );
	private:
		std::string	_name;
		Weapon		*_weapon;
};

