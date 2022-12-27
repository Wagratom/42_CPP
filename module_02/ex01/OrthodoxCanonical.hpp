/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OrthodoxCanonical.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:09:22 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/27 10:15:54 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ORTHODOXCANONICAL_H
#define ORTHODOXCANONICAL_H

# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		Fixed( void );
		Fixed( int const value );
		Fixed( float const value );
		~Fixed( void );

		Fixed	( const Fixed& outro);
		Fixed	&operator=(Fixed const &src);
		float	toFloat( void ) const;
		int		toInt(void) const;

		int 	getRawBits( void ) const ;
		void	setRawBits( int const raw );

	private:
		int					_fixed;
		int const static	_fractionalbits;
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);


#endif
