/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:26:00 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/18 10:20:37 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int	execute_harl(std::string level)
{
	Harl	msg;

	if (level == "I am not sure how tired I am today...")
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
		msg.complain(level);
	return (0);
}

int	main( int argc, char* argv[] )
{

	if (argc != 2)
	{
		std::cout << "Error: Invalid number of arguments" << std::endl;
		std::cout << "passed a valid argument: |\"WARNING\"| |\"DEBUG\"| |\"INFO\"| |\"ERROR\"| |\"I am not sure how tired I am today...\"|" << std::endl;
		return (1);
	}
	return (execute_harl(argv[1]));
}
