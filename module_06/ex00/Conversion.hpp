/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:00:52 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/03 08:53:56 by wwalas-          ###   ########.fr       */
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
		bool	write_science( void );

		bool	check_convertion_to_integer( void );
		void	Conversion_numbet_to_int( void );
		void	Conversion_numbet_to_char( void );

		bool	convert_fractional_numbers( void );
		void	Conversion_number_to_float( void );
		void	Conversion_number_to_double( void );
		void	run_conversion( void );

		void	is_science_number( void );



		Conversion&	operator=( const Conversion& obj);

	protected:
		std::string	_number;
		int			_nInteger;
		float		_nFloat;
		bool		_has_science;
};

