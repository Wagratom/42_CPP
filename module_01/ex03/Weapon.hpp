/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:16:25 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/17 11:43:09 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
	public:
		Weapon( std::string _type );
		~Weapon( void );

		std::string&	getType( void );
		void			setType( std::string _type);

	private:
		std::string type;
};
