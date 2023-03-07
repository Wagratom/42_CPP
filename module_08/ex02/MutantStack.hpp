/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:13:53 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/07 12:20:28 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>


template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack( void ) {};
		~MutantStack<T>( void ) {};

		typedef	typename std::stack<T>::container_type::iterator iterator;
		iterator begin( void ) { return (this->c.begin()); };
		iterator end( void ) { return (this->c.end()); };
	private:
};
