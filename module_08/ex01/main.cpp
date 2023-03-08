/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:20:15 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/08 09:25:25 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

void	test_pdf( void )
{
	Span array = Span(5);

	array.addNumber(6);
	array.addNumber(3);
	array.addNumber(17);
	array.addNumber(9);
	array.addNumber(11);
	std::cout << array.shortestSpan() << std::endl;
	std::cout << array.longestSpan() << std::endl;
}

#include <list>
void	test_invalid_size( void )
{
	Span array = Span(1);

	array.addNumber(11);
	array.addNumber(11);
	std::cout << array.shortestSpan() << std::endl;
	std::cout << array.longestSpan() << std::endl;
}

void	test_addRane( void )
{
	std::vector<int> aux(10);
	for (int i = 0; i < 10; i++) {
		aux[i] = (i+ 1);
	}
	Span array = Span(11);
	array.addRange(aux.begin(), aux.end());
	for (int i = 0; i < 10; i++) {
		std::cout << aux[i];
	}
	std::cout << std::endl;
}

int	main( void )
{
	// test_pdf();
	// test_invalid_size();
	test_addRane();
}