/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:32:03 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/06 11:31:54 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <conversions.hpp>
#include <utility>


conversions::conversions( void ) {
}

conversions::~conversions( void ) {
}

conversions::conversions( conversions const& src ) {
	*this = src;
}

void	conversions::conversionsInt( std::string nbr )
{
	int intEesult;

	std::cout << "int: ";
	try{
		is_valid_number(nbr);
		intEesult = conver_to_int(nbr);
		std::cout << intEesult << std::endl;
	}
	catch( std::exception& obj){
		std::cout << obj.what() << std::endl;
	}
}

int	convertion_and_displayable(int nbr)
{
	if (nbr >= 32 && nbr <= 126)
		return (nbr);
	throw std::invalid_argument("Non displayable");
}

void	conversions::conversionsChar( std::string nbr )
{
	char charResult;

	std::cout << "char: ";
	try {
		is_valid_number(nbr);
		charResult = convertion_and_displayable(conver_to_int(nbr));
		std::cout << charResult << std::endl;
	}
	catch(std::exception &obj){
		std::cout << obj.what() << std::endl;
	}
}

float	conver_to_number( std::string nbr)
{
	std::istringstream	aux(nbr);
	float				result;

	aux >> result;
	if (aux.fail())
		throw	std::invalid_argument("overflow");
	return (result);
}

void	conversions::conversionsFloat( std::string nbr )
{
	float	result;

	std::cout << "float: ";
	try{
		is_valid_number(nbr);
		result = conver_to_number(nbr);
		std::cout << result;
		print_correct_zero(nbr);
		std::cout << "f" << std::endl;
	}
	catch(std::exception &obj) {
		std::cout << obj.what() << std::endl;
	}
}

void	conversions::conversionsDouble( std::string nbr )
{
	double	result;

	std::cout << "double: ";
	try{
		is_valid_number(nbr);
		result = conver_to_number(nbr);
		std::cout << result;
		print_correct_zero(nbr);
		std::cout << std::endl;
	}
	catch(std::exception &obj){
		std::cout << obj.what() << std::endl;
	}
}
