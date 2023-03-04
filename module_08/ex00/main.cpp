/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:49:02 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/04 19:37:31 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>

int	main( void )
{
	std::vector<int> test;
	try {
		for (int i = 0; i < 10; i++)
			test.push_back((i + 1));
		test.push_back((0));
		easyfind(test, 1);
		easyfind(test, 10);
		easyfind(test, 0);
	} catch (std::out_of_range& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}