/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:26:21 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/09 12:17:57 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <Serialization.hpp>

int main(int argc, char *argv[])
{
	Serialization ptr;
	uintptr_t	result;
	Data*		data;
	Data*		data2;

	std::cout << "Data = " << data << std::endl;
	std::cout << "Data2 = " << data2 << std::endl;


	result = ptr.serialize(data);
	data2 = ptr.deserialize(result);

	std::cout << std::endl;
	std::cout << "Data = " << data << std::endl;
	std::cout << "Data2 = " << data2 << std::endl;

	return (0);
}
