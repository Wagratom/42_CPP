/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:56:01 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/30 12:25:03 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Dog.hpp>
# include <Cat.hpp>

int main( void )
{
	Animal	*animais[10];
	//Animal	*animais;

	for	(int x = 0; x < 5; x++)
		animais[x] = new Dog;

	std::cout << std::endl;
	for	(int x = 5; x < 10; x++)
		animais[x] = new Cat;
}
