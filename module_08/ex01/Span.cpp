/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:41:19 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/06 21:05:51 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span( void ) : _size(0), _index(0), _vector(0) {
}

Span::Span( unsigned int n ) : _size(n), _index(0), _vector(n) {
}

Span::Span( const Span& obj ) {
	*this = obj;
}

Span::~Span( void ) {
}

void	Span::addNumber(int number)
{
	try {
		if (_index >= _size)
			throw std::out_of_range("Error: Full array");
		this->_vector[_index] = number;
		_index++;
	} catch(std::out_of_range& e) {
		std::cout << e.what() << std::endl;
	}
}

void	Span::addRange(std::vector<int>::iterator init, std::vector<int>::iterator end)
{
	try {
		while (init != end)
		{
			if ((this->_index)++ >= this->_size)
				throw std::out_of_range("Error: while initializing all numbers in range");
			this->_vector[_index] = (*init);
			init++;
			_index += 1;
		}
	} catch (std::out_of_range& e) {
		std::cout << e.what() << std::endl;
	}
}

void	check_size_vector(int index)
{
	if (index <= 1)
		throw std::range_error("Error: Vector size is less than or equal to 1");
}

int	Span::shortestSpan( void )
{
	int	result = 2147483647;

	try {
		check_size_vector(this->_index);
		std::sort(this->_vector.begin(), this->_vector.end());
		std::vector<int>::iterator it = this->_vector.begin();
		while (it != (this->_vector.end() - 1))
		{
			if ((*(it + 1) - *it) < result)
				result = *(it + 1) - *it;
			it++;
		}
		return (result);
	} catch (std::range_error& e) {
		std::cout << e.what() << std::endl;
	}
	return (-1);
}

int	Span::longestSpan( void )
{
	int	result = -1;

	try {
		check_size_vector(this->_index);
		std::sort(this->_vector.begin(), this->_vector.end());
		result = *(this->_vector.end() - 1) - *(this->_vector.begin());
		return (result);
	} catch (std::range_error& e) {
		std::cout << e.what() << std::endl;
	}
	return (-1);
}

Span&	Span::operator=(const Span& obj)
{
	this->_index = obj._index;
	this->_size = obj._size;
	for (unsigned int i = 0; i < this->_index;i++){
		this->_vector[i] = obj._vector[i];
	}
	return (*this);
}

int		Span::operator[]( unsigned int index )
{
	if (index >= this->_size)
		throw std::out_of_range("Invalid index in array");
	return (this->_vector[index]);
}
