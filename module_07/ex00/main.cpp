/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:04:13 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/03 18:25:47 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <whatever.hpp>

void	test_main()
{
	std::cout << "\t Test main\n" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

void	test_swap( void )
{
	double	a = 10.10;
	double	b = 20.10;

	std::cout << "\t Test swap\n" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	swap(a, b);

	std::cout << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
}

void	test_min( void )
{
	int	a = 10;
	int	b = 20;

	std::cout << "\t Test min\n" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "min = " << min(b, a) << std::endl;
}

void	test_max( void )
{
	int	a = 10;
	int	b = 20;

	std::cout << "\t Test max\n" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "max = " << max(b, a) << std::endl;
}

int	main( void )
{
	test_main();
	test_swap();
	test_min();
	test_max();
}