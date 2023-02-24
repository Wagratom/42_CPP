/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_test.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:01:20 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/24 15:35:09 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>
#include <Dog.hpp>

void	fill_meta( const Animal* meta[] )
{
	for (int i = 0; i < 3; i++)
		meta[i] = new Dog;
	for (int i = 3; i < 6; i++)
		meta[i] = new Cat;
}

void	print_meta( const Animal* meta[] )
{
	for (int i = 0; i < 6; i++) {
		meta[i]->makeSound();
	}
	std::cout << std::endl;
}

void	my_test( void )
{
	std::cout << "\t My test" << std::endl;
	const Animal* meta[6];

	fill_meta(meta);
	print_meta(meta);

	for (int i = 0; i < 6; i++){
		delete meta[i];
	}
	std::cout << std::endl;
}

/******************************************************************************/
/*                                  ideas                                     */
/******************************************************************************/

void	ideas_cat( void )
{
	Cat* cat1 = new Cat();
	Cat* cat2 = new Cat();

	*cat2 = *cat1;

	delete cat1;

	cat2->printIdeas();

	delete cat2;
}

void	ideas_dog( void )
{
	Dog* dog1 = new Dog();
	Dog* dog2 = new Dog();

	*dog2 = *dog1;

	delete dog1;

	dog2->printIdeas();

	delete dog2;
}