/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MergeSort.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:24:48 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/11 16:06:53 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MergeSort.hpp>

int	get_number( std::string number)
{
	long int = number_long = std::atol(number.c_str());

	if (number_long > INT_MAX || number_long < INT_MIN)
		throw std::overflow_error("Overflow in expression");
	return (number_long);
}

int	get_number(std::string range, int &spaces)
{
	long int number;
	std::string number_str;

	spaces = range.find(' ');
	number_str = range.substr(0, spaces);
	number = get_number(number_str);
	return (number);
}

bool	check_parameters( std::string range )
{
	int	spaces;
	int number;
	std::string number_str;

	for (int i = 0; range[i]; i++)
	{
		spaces = range.find(' ');
		number_str = range.substr(0, spaces);
		number = std::stoi(number_str);
		if (!isdigit(range[i]))
			throw std::invalid_argument("Value in expression is not a digit");
	}
}
MergeSort::MergeSort( void ) {
}

MergeSort::MergeSort( std::string range ) {
}

MergeSort::~MergeSort( void ) {
}
