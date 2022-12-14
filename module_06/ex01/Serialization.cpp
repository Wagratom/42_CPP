/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:32:03 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/09 14:59:23 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Serialization.hpp>
#include <utility>


Serialization::Serialization( void ) {
	std::cout << "Default constructor called" << std::endl;
}

Serialization::~Serialization( void ) {
	std::cout << "Destructor called" << std::endl;
}

Serialization::Serialization( Serialization const& src ) {
	std::cout << "Serialization Default constructor called" << std::endl;
	*this = src;
}

uintptr_t	Serialization::serialize(Data* ptr) {
	return ((uintptr_t )ptr);
}

Data*		Serialization::deserialize(uintptr_t raw)
{
	Data*	conversion = (Data* )raw;
	return (conversion);
}

