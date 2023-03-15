/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:45:15 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/15 14:53:12 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>

void	execute_program(char *argv)
{
	if (argv == NULL || argv[0] == '\0')
		return ;
	BitcoinExchange	exchange;
	exchange.create_map();
	exchange.print_formated(argv);
}
int	main( int argc, char *argv[])
{
	argc = argc;
	argv = argv;

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
