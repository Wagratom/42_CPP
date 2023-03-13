/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MergeSort.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:24:48 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/12 14:35:31 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MergeSort.hpp>

MergeSort::MergeSort( void ) : _vector(), _index(0){
}

MergeSort::~MergeSort( void ) {
}

/******************************************************************************/
/*                             add number                                     */
/******************************************************************************/

void	is_digit_or_throw( std::string number )
{
	for (int i = 0; number[i] != '\0'; i++)
	{
		if (!isdigit(number[i]))
			throw std::invalid_argument("Value in expression is not a digit");
	}
}

int	convert_or_throw( std::string number )
{
	long int	result;

	result = std::atol(number.c_str());
	if (result > INT_MAX || result < INT_MIN)
		throw std::overflow_error("Overflow in expression");
	return (result);
}

int	convert_in_integer( std::string number)
{
	int	result;

	is_digit_or_throw(number);
	result = convert_or_throw(number);
	return (result);
}

std::string	get_number_str(std::string range)
{
	int			space;

	space = range.find(' ');
	if (space != (int)std::string::npos)
		return (range.substr(0, space));
	return (range.substr(0, range.size()));
}

void	MergeSort::add_number( char *argv[] )
{
	std::string	number_str;
	int			number;

	for (int i = 0; argv[i]; i++)
	{
		number_str = get_number_str(argv[i]);
		number = convert_in_integer(number_str);
		_vector.push_back(number);
	}
}

/******************************************************************************/
/*                               Merge Sort                                   */
/******************************************************************************/

void	fill_arrays( std::vector<int>& aux1, std::vector<int>& aux2, std::vector<int> vector )
{
	int	index = 0;

	while (index < (int)(vector.size() / 2))
	{
		aux1.push_back(vector[index]);
		index++;
	}
	while (index < (int)vector.size())
	{
		aux2.push_back(vector[index]);
		index++;
	}
}

void	MergeSort::numbers_left(std::vector<int>& endArray, std::vector<int> array, int index)
{
	if (index >= (int)array.size())
		return ;
	for (int i = index; i < (int)array.size(); i++)
		endArray[_index++] = array[i];
}

void	MergeSort::orde_endArray( std::vector<int> aux1, std::vector<int> aux2, std::vector<int>& endArray )
{
	int	index1 = 0;
	int index2 = 0;
	_index = 0;

	while (index1 < (int)aux1.size() && index2 < (int)aux2.size())
	{
		if (aux1[index1] < aux2[index2])
		{
			endArray[_index] = aux1[index1];
			index1++;
		}
		else
		{
			endArray[_index] = aux2[index2];
			index2++;
		}
		_index++;
	}
	numbers_left(endArray, aux1, index1);
	numbers_left(endArray, aux2, index2);
}

void	MergeSort::sort( std::vector<int>& endArray)
{
	if (endArray.size() == 1)
		return ;
	std::vector<int> aux1;
	std::vector<int> aux2;

	fill_arrays(aux1, aux2, endArray);
	sort(aux1);
	sort(aux2);
	orde_endArray(aux1, aux2, endArray);
}

void	MergeSort::merge_sort( void )
{
	sort(_vector);
}

int MergeSort::size( void ) const {
	return (_vector.size());
}

int&	MergeSort::operator[](unsigned int index)
{
	if (index >= _vector.size())
		throw std::out_of_range("Index out of range");
	return (_vector[index]);
}

void	MergeSort::print_vector( void )
{
	for (int i = 0; i < size(); i++) {
		std::cout << "Vector [" << i << "] = " << _vector[i] << std::endl;
	}
}

/******************************************************************************/
/*                           functions auxiliares                             */
/******************************************************************************/

void	visualize_aux( std::vector<int> vector1, std::vector<int> vector2)
{
	for (int i = 0; i < (int)vector1.size(); i++)
		std::cout << "Vector1 [" << i << "] = " << vector1[i] << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < (int)vector2.size(); i++)
		std::cout << "Vector2 [" << i << "] = " << vector2[i] << std::endl;
	std::cout << std::endl;
}

void	visualize_endArray(std::vector<int> endArray)
{
	for (int i = 0; i < (int)endArray.size(); i++)
		std::cout << "endArray [" << i << "] = " << endArray[i] << std::endl;
	std::cout << std::endl;
}
