/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:28:22 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/01 14:02:05 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Conversion.hpp>

int	main( int argc, char* argv[] )
{
	if (argc == 2 && argv[1] != NULL)
	{
		Conversion	obj(argv[1]);

		obj.run_conversion();
	}
	else
		std::cout << "Invalid number of arguments" << std::endl;
	return (0);
}