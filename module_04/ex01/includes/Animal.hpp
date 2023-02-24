/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:49:06 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/23 18:32:44 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	public:
		Animal( void );
		Animal( std::string _type );
		Animal( const Animal& obj );
		virtual ~Animal( void );

		virtual void		makeSound( void ) const;
		std::string	getType( void ) const;

		Animal&	operator=(const Animal& obj);

	protected:
		std::string type;
};

