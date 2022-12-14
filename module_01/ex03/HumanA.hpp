/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:20:40 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/22 16:02:47 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <Weapon.hpp>

class HumanA
{
	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA( void );

		void	attack( void );

	private:
		std::string	_name;
		Weapon&		_weapon;
};

#endif
