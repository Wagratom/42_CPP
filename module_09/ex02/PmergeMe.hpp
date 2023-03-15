/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:08:24 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/14 14:57:02 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <sys/time.h>
#include <algorithm>


class PmergeMe
{
	public:
		PmergeMe( void );
		PmergeMe( char *argv[] );
		PmergeMe( const PmergeMe& obj );
		~PmergeMe( void );

		void	merge_sort( void );

		void				add_number( char *argv[] );
		int					size( void ) const;
		std::vector<int>	get_vector( void ) const;

		void	orde_endArray( std::vector<int> aux1, std::vector<int> aux2, std::vector<int>& endArray );
		void	sort( std::vector<int>& endArray);

		void	numbers_left(std::vector<int>& endArray, std::vector<int> array, int index);

		int&		operator[](unsigned int index);
		PmergeMe&	operator=(const PmergeMe& obj);

	private:
		std::vector<int>	_vector;
		int					_index;
};

std::ostream&	operator<<(std::ostream& out, PmergeMe& obj);
void	visualize_aux( std::vector<int> vector1, std::vector<int> vector2);
void	visualize_endArray(std::vector<int> endArray);

#define INT_MAX 2147483647
#define INT_MIN -2147483648
