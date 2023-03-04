/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 09:30:38 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/04 11:31:26 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

template<typename T>
class Array
{
	public:
Array( void ) : _array(NULL), _size(0) {};

Array<T>( const Array<T>& obj ) : _array(NULL), _size(obj._size)
{
	this->_array = new T[_size];
	*this=obj;
};

Array(unsigned int n) : _array(NULL), _size(n)
{
	if (n > 0)
		_array = new T[n]();
};

size_t	size( void ) { return (_size);};

~Array( void ) {
delete[] _array;
};

T&	operator[](size_t index)
{
	if (index >= _size)
		throw std::range_error("Invalid range array");
	return (_array[index]);
}

Array&	operator=( const Array& obj)
{
	this->_size = obj._size;
	for (size_t i = 0; i < this->_size ; i++) {
		this->_array[i] = obj._array[i];
	}
	return (*this);
}
	private:
		T*		_array;
		size_t	_size;
};