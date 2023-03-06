/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:41:19 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/06 12:34:13 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span( void ) : _size(0), _index(0) {
}

Span::Span( unsigned int n ) : _size(n), _index(0) {
}

Span::~Span( void ) {
}

void	Span::addNumber(int number)
{
	try {
		if (_index >= _size)
			throw std::out_of_range("Error: Full array");
		this->_vector.push_back(number);
		_index++;
	} catch(std::out_of_range& e) {
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