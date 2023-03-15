/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:45:15 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/15 12:36:48 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>

int	main( int argc, char *argv[])
{
	argc = argc;
	argv = argv;

	BitcoinExchange	exchange;
	exchange.create_map();
	exchange.print_formated(argv[1]);
	return (0);
}
