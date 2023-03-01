/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:00:52 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/01 14:07:00 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <errno.h>

class Conversion
{
	public:
		Conversion( void );
		Conversion( std::string number );
		Conversion( const Conversion& obj );
		~Conversion( void );

		bool	valid_number( void );

		void	Conversion_numbet_to_int( void );
		void	Conversion_numbet_to_char( void );

		void	write_fractional_numbers( void );
		bool	is_float_science( float number );
		void	Conversion_numbet_to_float( void );
		void	Conversion_numbet_to_double( void );
		void	run_conversion( void );

		void	is_science_number( void );


		Conversion&	operator=( const Conversion& obj);

	protected:
		std::string	_number;
		std::string	_integer;
		bool		_has_science;
};

