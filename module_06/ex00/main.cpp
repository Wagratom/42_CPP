/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:26:21 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/06 12:06:02 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <conversions.hpp>

int main(int argc, char *argv[])
{
	conversions convert;

	if (argc == 2)
	{
		convert.conversionsInt(argv[1]);
		convert.conversionsChar(argv[1]);
		convert.conversionsFloat(argv[1]);
		convert.conversionsDouble(argv[1]);
		return (0);
	}
	std::cout << "Invalid Number of arguments" << std::endl;
	return (1);
}
