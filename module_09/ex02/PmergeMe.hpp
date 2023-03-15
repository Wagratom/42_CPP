/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:08:24 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/15 17:29:43 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
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

		void	add_number_in_vectors( char *argv[] );

		void	merge_sort_vector( void );
		void	merge_sort_deque( void );


		template<typename T>
		void				orde_endArray( T aux1, T aux2, T& endArray );

		template<typename T>
		void				sort( T& endArray);

		template<typename T>
		void				get_numbers_left(T& endArray, T array, int index);

		void	print_vector( void ) const;
		void	print_deque( void ) const;

		std::vector<int>	get_vector( void ) const;
		std::deque<int>		get_deque( void ) const;

		int					size_vector( void ) const;
		int					size_deque( void ) const;

		int&				operator[](unsigned int index);
		PmergeMe&			operator=(const PmergeMe& obj);

	private:
		std::vector<int>	_vector;
		std::deque<int>		_deque;
		int					_index;
};

#define INT_MAX 2147483647
#define INT_MIN -2147483648
