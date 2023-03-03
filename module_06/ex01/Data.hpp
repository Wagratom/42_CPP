/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:34:14 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/03 10:37:22 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>
#include <iostream>

class Data
{
	public:
		Data( void );
		Data( std::string name, std::string annotation );
		Data( const Data& obj );
		~Data( void );

		std::string	getName( void ) const ;
		std::string	getAnnotation( void ) const ;
		uintptr_t	serialize(Data* ptr);
		Data*		deserialize(uintptr_t raw);

		Data&	operator=( const Data& obj );

	private:
		std::string	_name;
		std::string	_annotation;
};

std::ostream&	operator<<( std::ostream& old, const Data& obj );