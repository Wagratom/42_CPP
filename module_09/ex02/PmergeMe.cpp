/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:08:45 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/16 18:17:16 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

PmergeMe::PmergeMe( void ) : _vector(), _index(0){
}

PmergeMe::PmergeMe( char *argv[] ) : _vector(), _index(0){
	add_number_in_vectors(argv);
}

PmergeMe::PmergeMe( const PmergeMe& obj ) {
	*this = obj;
}

PmergeMe::~PmergeMe( void ) {
}

/******************************************************************************/
/*                             add number                                     */
/******************************************************************************/

void	is_digit_or_throw( std::string number )
{
	for (int i = 0; number[i] != '\0'; i++)
	{
		if (!isdigit(number[i]))
			throw std::invalid_argument("Error");
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

void	PmergeMe::add_number_in_vectors( char *numbers[] )
{
	int			number;

	for (int i = 0; numbers[i]; i++)
	{
		number = convert_in_integer(numbers[i]);
		_vector.push_back(number);
		_deque.push_back(number);
	}
}

/******************************************************************************/
/*                               Merge Sort Vector                            */
/******************************************************************************/

template<typename T>
void	fill_arrays( T& aux1, T& aux2, T vector )
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

template<typename T>
void	PmergeMe::get_numbers_left(T& endArray, T array, int index)
{
	if (index >= (int)array.size())
		return ;
	for (int i = index; i < (int)array.size(); i++)
		endArray[_index++] = array[i];
}

template<typename T>
void	PmergeMe::orde_endArray( T aux1, T aux2, T& endArray )
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
	get_numbers_left(endArray, aux1, index1);
	get_numbers_left(endArray, aux2, index2);
}

template<typename T>
void	PmergeMe::sort( T& endArray)
{
	if (endArray.size() == 1)
		return ;
	T aux1;
	T aux2;

	fill_arrays(aux1, aux2, endArray);
	sort(aux1);
	sort(aux2);
	orde_endArray(aux1, aux2, endArray);
}

void	PmergeMe::merge_sort_vector( void )
{
	sort(_vector);
}

void	PmergeMe::merge_sort_deque( void )
{
	sort(_deque);
}

/******************************************************************************/
/*                               Auxiliaries                                  */
/******************************************************************************/

void	PmergeMe::print_vector( void ) const
{
	for (int i = 0; i < (int)_vector.size(); i++)
		std::cout << _vector[i] << " ";
	std::cout << std::endl;
}

void	PmergeMe::print_deque( void ) const
{
	for (int i = 0; i < (int)_deque.size(); i++)
		std::cout << _deque[i] << " ";
	std::cout << std::endl;
}

int PmergeMe::size_vector( void ) const {
	return (_vector.size());
}

int PmergeMe::size_deque( void ) const {
	return (_deque.size());
}

std::vector<int> PmergeMe::get_vector( void ) const {
	return (_vector);
}
std::deque<int> PmergeMe::get_deque( void ) const {
	return (_deque);
}

/******************************************************************************/
/*                              Operators                                     */
/******************************************************************************/

PmergeMe&	PmergeMe::operator=(const PmergeMe& obj)
{
	this->_vector = obj.get_vector();
	this->_deque = obj.get_deque();
	this->_index = obj._index;
	return (*this);
}
