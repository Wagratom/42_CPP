/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:15:54 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/20 11:38:45 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed( const Fixed& old);

		Fixed&	operator=( const Fixed& old);
		int		getRawBits( void ) const;
		void 	setRawBits( int const raw );

		~Fixed( void );

	private:
		int					_fixed;
		static const int	_fractional;
};


