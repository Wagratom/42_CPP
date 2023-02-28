/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:49:06 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/23 17:02:15 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal( void );
		WrongAnimal( std::string _type );
		WrongAnimal( const WrongAnimal& obj );
		~WrongAnimal( void );

		void			makeSound( void ) const;
		std::string		getType( void ) const;

		WrongAnimal&	operator=(const WrongAnimal& obj);
	protected:
		std::string type;
};

