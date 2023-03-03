/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:04:13 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/03 18:14:17 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <whatever.hpp>

void	test_swap( void )
{
	int	a = 10;
	int	b = 20;

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
	test_swap();
	test_min();
	test_max();
}