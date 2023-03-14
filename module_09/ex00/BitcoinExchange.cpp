/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:55:50 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/14 16:42:26 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>

BitcoinExchange::BitcoinExchange( void ) {
}

BitcoinExchange::~BitcoinExchange( void ) {
}
bool	BitcoinExchange::open_input( char* name )
{
	_input.open(name);
	if (_input.is_open())
		return (true);
	std::cout << "Error: Not crete input file" << std::endl;
	return (false);
}

bool	BitcoinExchange::create_map( void )
{
	std::string		line;
	std::string		key;
	std::string		value;
	int				delimiter;

	if (!open_input((char*)"data.csv"))
		return (false);
	while (std::getline(_input, line))
	{
		delimiter = line.find(',');
		key = line.substr(0, delimiter);
		value = line.substr(delimiter + 1, line.length());
		_DataBase[key] = value;
	}
	_input.close();
	return (true);
}

void	BitcoinExchange::create_map( void )
