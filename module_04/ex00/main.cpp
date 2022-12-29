/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:56:01 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/29 14:44:41 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Dog.hpp>
# include <Cat.hpp>
#	include <WrongCat.hpp>

int main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\nTest correct pholimorphism\n" << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << "\nTest error pholimorphism\n" << std::endl;

	const WrongAnimal* WrongMeta = new WrongAnimal();
	const WrongAnimal* WrongI = new WrongCat();
	std::cout << std::endl;

	std::cout << WrongI->getType() << " " << std::endl;
	WrongI->makeSound();
	WrongMeta->makeSound();

	std::cout << std::endl;
	delete WrongMeta;
	delete WrongI;
}
