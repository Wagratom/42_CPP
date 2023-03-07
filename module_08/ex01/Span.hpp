/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:41:19 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/06 20:59:29 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	public:
		Span( void );
		Span( const Span& obj );
		Span( unsigned int n );
		~Span( void );

		void		addNumber( int number );
		void		addRange( std::vector<int>::iterator init, std::vector<int>::iterator end );
		int			shortestSpan( void );
		int			longestSpan( void );

		int		operator[]( unsigned int index );
		Span&	operator=( const Span& obj );

	private:
		unsigned int		_size;
		unsigned int		_index;
		std::vector<int>	_vector;
};
