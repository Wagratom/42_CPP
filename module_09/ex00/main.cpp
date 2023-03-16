/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:45:15 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/16 18:28:06 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>

void	execute_program(char *argv)
{
	if (argv == NULL || argv[0] == '\0')
		return ;
	std::cout << "opening file: " << argv << std::endl;
	BitcoinExchange	exchange;
	exchange.create_map();
	exchange.print_formated(argv);
	std::cout << "end read file " << std::endl;
	std::cout << "----------------------------------------" << std::endl;
}

int	main( int argc, char *argv[])
{
	if (argc <= 1)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (EXIT_FAILURE);
	}
	for (int i = 1; i < argc; i++) {
		execute_program(argv[i]);
	}
	return (EXIT_SUCCESS);
}
