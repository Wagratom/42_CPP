/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MergeSort.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:24:48 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/11 18:36:27 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <cstdlib>

class MergeSort : public std::vector<int>
{
	public:
		MergeSort( void );
		~MergeSort( void );

		void	add_number( char *argv[] );

		int&	operator[](unsigned int index);
	private:
	std::vector<int>	_vector;
};

#define INT_MAX 2147483647
#define INT_MIN -2147483648
