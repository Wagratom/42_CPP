/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:20:15 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/06 12:42:52 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

void	test_pdf( void )
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	test_invalid_size( void )
{
	Span sp = Span(1);
	sp.addNumber(11);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int	main( void )
{
	test_pdf();
	// test_invalid_size();
}