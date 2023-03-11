/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MergeSort.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:24:48 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/11 18:38:21 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MergeSort.hpp>

int	convert_in_integer( std::string number)
{
	long int	result;

	for (int i = 0; number[i] != '\0'; i++) {
		if (!isdigit(number[i]))
			throw std::invalid_argument("Value in expression is not a digit");
	}
	result = std::atol(number.c_str());
	if (result > INT_MAX || result < INT_MIN)
		throw std::overflow_error("Overflow in expression");
	return (result);
}

std::string	get_number_str(std::string range, bool &end)
{
	std::string	number_str;
	int			space;

	space = range.find(' ');
	if (space != (int)std::string::npos)
		number_str = range.substr(0, space);
	else
	{
		number_str = range.substr(0, range.size());
		end = true;
	}
	return (number_str);
}

void	MergeSort::add_number( char *argv[] )
{
	std::string	number_str;
	int			number;
	bool		end;

	end = false;
	for (int i = 0; argv[i]; i++)
	{
		number_str = get_number_str(argv[i], end);
		std::cout << "number_str" << number_str << std::endl;
		number = convert_in_integer(number_str);
		_vector.push_back(number);
	}
}

MergeSort::MergeSort( void ) : _vector(){
}

MergeSort::~MergeSort( void ) {
}

int&	MergeSort::operator[](unsigned int index)
{
	if (index >= _vector.size())
		throw std::out_of_range("Index out of range");
	return (_vector[index]);
}
