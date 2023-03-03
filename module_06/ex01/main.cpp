/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:55:33 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/03 10:42:10 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Data.hpp>

int main( void )
{
	Data	data("Benner", "Eu gosto de macaxeira");
	Data	*data2;
	uintptr_t	pointer;

	std::cout << "\nAddress: " << &data << std::endl;
	std::cout << data << std::endl;

	pointer = data.serialize(&data);
	std::cout << "Serialize: " << pointer << std::endl;

	data2 = data.deserialize(pointer);

	std::cout << "\nAddress: " << data2 << std::endl;
	std::cout << *data2 << std::endl;

	return (0);
}