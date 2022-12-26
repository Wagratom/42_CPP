/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OrthodoxCanonical.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:09:22 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/26 13:55:53 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ORTHODOXCANONICAL_H
#define ORTHODOXCANONICAL_H

#include <iostream>

class	Fixed
{
	public:
		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed& outro);
		Fixed	&operator=(Fixed const &src);

		int getRawBits( void ) const ;
		void	setRawBits( int const raw );

	private:
		int					_fixed;
		int const static	_bits;
};

#endif
