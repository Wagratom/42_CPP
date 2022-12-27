/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:09:22 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/27 10:37:51 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_H
#define FIXED_H

#include <iostream>

class	Fixed
{
	public:
		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed& outro);
		Fixed	&operator=(Fixed const &src);

		int		getRawBits( void ) const ;
		void	setRawBits( int const raw );

	private:
		int					_fixed;
		int const static	_fractionalbits;
};

#endif
