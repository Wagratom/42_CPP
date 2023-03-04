/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:46:22 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/04 19:33:51 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>

template<typename T>
void	easyfind(T array, int value)
{
	typename T::iterator it = array.begin();

	int flag = (value == 0);
	while (it != (array.end() - flag))
	{
		if (*it == value)
		{
			std::cout << "value in array" << std::endl;
			return ;
		}
		it++;
	}
	throw std::out_of_range("Not integer in array");
}