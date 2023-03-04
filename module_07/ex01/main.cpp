/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:27:35 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/03 18:54:52 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.hpp>

void	print_int(int& value) {
	std::cout << "value = " << value << std::endl;
}

void	print_int(char& value) {
	std::cout << "char = " << value << std::endl;
}

int	main( void )
{
	int	array_int[] = {1, 2, 3, 4, 5};
	iter(array_int, 5, print_int);

	std::cout << std::endl;

	char	array_char[] = {'a', 'b', 'c', 'd'};
	iter(array_char, 4, print_int);
	return (0);
}