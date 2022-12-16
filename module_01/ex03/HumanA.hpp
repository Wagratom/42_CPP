/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:20:40 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/15 21:22:11 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

class HumanA
{
	public:
		HumanA( std::string name, Weapon weapon );
		~HumanA( void );

		void	attack( void );
	private:
		std::string	_name;
		Weapon		_weapon;
};

