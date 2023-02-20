/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:15:54 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/20 11:38:37 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed( void );
		Fixed( const int number );
		Fixed( const float number );
		Fixed( const Fixed& old);

		int		getRawBits( void ) const;
		void 	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;

		Fixed&		operator=( const Fixed& old);
		~Fixed( void );

	private:
		int					_fixed;
		static const int	_fractional;
};

std::ostream&	operator<<(std::ostream& old, const Fixed& obj);