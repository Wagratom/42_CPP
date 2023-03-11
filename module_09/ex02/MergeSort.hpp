/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MergeSort.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:24:48 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/11 16:05:41 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class MergeSort
{
	public:
		MergeSort( void );
		MergeSort( std::string range );
		~MergeSort( void );
	private:
	std::vector<int>	_vector;
};

#define INT_MAX 2147483647
#define INT_MIN -2147483648
