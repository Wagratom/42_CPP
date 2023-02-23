/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:55:21 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/23 10:02:17 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

void	test_pos_encrement( void )
{
	Fixed a;

	std::cout << "\ttest_pre_encrement" << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

}

void	test_pre_encrement( void )
{
	Fixed a;

	std::cout << "\ttest_pos_encrement" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
}

void	test_operatores()
{
	std::cout << "\ttest_operatores" << std::endl;
	Fixed a(10);
	Fixed b(20);

	std::cout << (b + a) << std::endl;
	std::cout << (b - a) << std::endl;
	std::cout << (b / 2) << std::endl;
	std::cout << (b * 2) << std::endl;
}

void	test_comparacion( void )
{
	std::cout << "\ttest_comparacion" << std::endl;
	Fixed	a;
	Fixed	aa;
	Fixed	b(10);

	if (a == aa)
		std::cout << "equal" << std::endl;
	if (a < b)
		std::cout << "a menor" << std::endl;
	if (b > a)
		std::cout << "b very" << std::endl;
	if (a <= aa)
		std::cout << "menor equal" << std::endl;
	if (a >= aa)
		std::cout << "very equal" << std::endl;
	if (a != b)
		std::cout << "different" << std::endl;
}


void	test_max_min( void )
{
	std::cout << "\ttest_max_min" << std::endl;
	Fixed	a;
	Fixed	b(10);

	std::cout << "max " << Fixed::max(a, b) << std::endl;;
	std::cout << "min " << Fixed::min(a, b) << std::endl;;
}

void	test_main( void )
{
	std::cout << "\ttest_main" << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
}

int main( void )
{

	// test_pre_encrement();
	// test_pos_encrement();
	// test_operatores();
	// test_comparacion();
	test_max_min();
	// test_main();
	return 0;
}


