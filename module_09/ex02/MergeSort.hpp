/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MergeSort.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:24:48 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/13 16:23:49 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <cstdlib>

class MergeSort
{
	public:
		MergeSort( void );
		~MergeSort( void );

		void	merge_sort( void );

		void	add_number( char *argv[] );
		int		size( void ) const;
		void	print_vector( void );

		void	orde_endArray( std::vector<int> aux1, std::vector<int> aux2, std::vector<int>& endArray );
		void	sort( std::vector<int>& endArray);

		void	numbers_left(std::vector<int>& endArray, std::vector<int> array, int index);

		int&	operator[](unsigned int index);
	private:
		std::vector<int>	_vector;
		int					_index;
};

void	visualize_aux( std::vector<int> vector1, std::vector<int> vector2);
void	visualize_endArray(std::vector<int> endArray);

#define INT_MAX 2147483647
#define INT_MIN -2147483648
