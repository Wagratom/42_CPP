/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:41:19 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/06 12:29:35 by wwalas-          ###   ########.fr       */
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
		Span( unsigned int n );
		~Span( void );

		void		addNumber(int number);
		int			shortestSpan( void );
		int			longestSpan( void );

	private:
		unsigned int		_size;
		unsigned int		_index;
		std::vector<int>	_vector;
};
