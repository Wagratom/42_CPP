/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:20:58 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/27 19:35:17 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	//					my tests
	Fixed	menor(10);
	Fixed	maior(20);
	Fixed	equal(20);

	std::cout << "\nmajor and minor sign test" << std::endl;
	std::cout << (menor < maior) << std::endl;
	std::cout << (menor <= maior) << std::endl;
	std::cout << (menor > maior) << std::endl;
	std::cout << (menor >= maior) << std::endl;
	std::cout << (equal == maior) << std::endl;
	std::cout << (equal != maior) << std::endl;

	std::cout << "\noperations test" << std::endl;
	std::cout << (menor + maior) << std::endl;
	std::cout << (menor - maior) << std::endl;
	std::cout << (menor * maior) << std::endl;
	std::cout << (menor / maior) << std::endl;

	std::cout << "\nincrement test" << std::endl;
	std::cout << menor++ << std::endl;
	std::cout << menor-- << std::endl;
	std::cout << ++menor << std::endl;
	std::cout << --menor << std::endl;

	return 0;
}

