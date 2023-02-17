/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:02:30 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/17 15:52:12 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Replace.hpp>

int main ( int argc, char *argv[] )
{
	if (argc == 4)
	{
		Replace	obj(argv[2], argv[3]);

		if (!obj.get_text_input(argv[1]))
			return (1);
		if (!obj.write_text_replace(argv[1]))
			return (1);
		return (0);
	}
	std::cout << "Invalid number of argument" << std::endl;
	return (1);
}
