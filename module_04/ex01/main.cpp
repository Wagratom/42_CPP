/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:01:20 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/23 17:49:50 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongCat.hpp>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* w = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << w->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	w->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete w;
	delete meta;

	return 0;
}
