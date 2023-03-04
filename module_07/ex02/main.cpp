/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 09:30:03 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/04 14:16:48 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>

void	all_test( void )
{
	std::cout << "\t Test copy" << std::endl;

	Array<unsigned int>	array(10);
	for (size_t i = 0; i < array.size(); i++) {
		array[i] = i;
	}

	std::cout << "array" << std::endl;
	for (size_t i = 0; i < array.size(); i++) {
		std::cout << array[i];
	}
	std::cout << std::endl;

	std::cout << "copy" << std::endl;
	Array<unsigned int> array2(array);
	for (size_t i = 0; i < array.size(); i++) {
		std::cout << array2[i];
	}
	std::cout << std::endl;
}

int	main( void )
{
	all_test();

	return (0);
}