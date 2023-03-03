/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:09:44 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/03 17:26:08 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void	swap( T& item1, T& item2)
{
	T aux = item1;

	item1 = item2;
	item2 = aux;
}

template<typename T>
T min( T item1, T item2)
{
	if (item1 < item2)
		return (item1);
	return (item2);
}

template<typename T>
T max( T item1, T item2)
{
	if (item1 > item2)
		return (item1);
	return (item2);
}