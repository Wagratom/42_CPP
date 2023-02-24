/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:01:20 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/24 15:19:09 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>
#include <Dog.hpp>

void	my_test( void );
void	ideas( void );

void	test_main( void )
{
	std::cout << "\t Test main" << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	delete j;//should not create a leak
	delete i;
	std::cout << std::endl;
}

int main()
{
	// test_main();
	// my_test();
	ideas();
	return 0;
}
