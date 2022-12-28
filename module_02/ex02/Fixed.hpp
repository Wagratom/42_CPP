/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:09:22 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/27 18:50:41 by wwallas-         ###   ########.fr       */
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
		Fixed( const Fixed& outro);
		~Fixed( void );

		float	toFloat( void ) const;
		int		toInt(void) const;

		int 	getRawBits( void ) const ;
		void	setRawBits( int const raw );

		Fixed	&operator=(Fixed const &obj);
		bool	operator>(Fixed const& obj);
		bool	operator<(Fixed const &obj);
		bool	operator>=(Fixed const &obj);
		bool	operator<=(Fixed const &obj);
		bool	operator==(Fixed const &obj);
		bool	operator!=(Fixed const &obj);

		Fixed	operator+(Fixed const &obj);
		Fixed	operator-(Fixed const &obj);
		Fixed 	operator*(Fixed const &src);
		Fixed	operator/(Fixed const &obj);

		// Fixed	operator++(Fixed const &obj);
		// Fixed	operator--(Fixed const &obj);
		Fixed&	operator++( void );
		Fixed&	operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );



		Fixed&			min(Fixed &number1, Fixed &number2);
		Fixed const&	min(Fixed const &number1, Fixed const &number2);

		static Fixed&	max(Fixed &number1, Fixed &number2);
		static Fixed const&	max(Fixed const &number1, Fixed const &number2);

	private:
		int					_fixed;
		int const static	_fractionalbits;
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);


#endif
