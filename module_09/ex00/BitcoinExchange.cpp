/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:55:50 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/15 14:38:28 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>

BitcoinExchange::BitcoinExchange( void ) {
}

BitcoinExchange::~BitcoinExchange( void ) {
}

bool	BitcoinExchange::open_file( char* name )
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
	int			delimiter;

	if (!open_file((char*)"data.csv"))
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

/******************************************************************************/
/*                             Get Valid Key                                  */
/******************************************************************************/

void	BitcoinExchange::valid_data( std::string& data)
{
	if (data.length() != 10)
		throw	std::invalid_argument("Error: Invalid date format: ");
	if (data[4] != '-' || data[7] != '-')
		throw	std::invalid_argument("Error: Invalid date format: ");
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
			continue ;
		if (!isdigit(data[i]))
			throw	std::invalid_argument("Error: Date has a non-digit character: ");
	}
}

void	BitcoinExchange::get_data( std::string line , std::string& data)
{
	int			delimiter;

	delimiter = line.find('|');
	if (delimiter == (int)std::string::npos)
		throw	std::invalid_argument("Error: bad input => ");
	data = line.substr(0, delimiter - 1);
}

bool	BitcoinExchange::get_valid_key( std::string line )
{
	std::string	data;

	try {
		get_data(line, data);
		valid_data(data);
		_key = data;
		return (true);
	} catch (std::exception &e) {
		std::cout << e.what() << line << std::endl;
	}
	return (false);
}

/******************************************************************************/
/*                            Print Value                                     */
/******************************************************************************/

float	BitcoinExchange::get_value_DataBase( std::string& key)
{
	std::string value;

	_it = _DataBase.lower_bound(key);
	if (_it == _DataBase.end())
		_it--;
	value = _it->second;
	return (std::atof(value.c_str()));
}

void	BitcoinExchange::valid_value( std::string& value)
{
	int	result;
	int	point = 0;

	for (int i = 0; value[i]; i++)
	{
		if (value[i] == '.' && point++ == 0)
			continue ;
		if (value[i] == '-' && i == 0)
			throw	std::invalid_argument("Error: not a positive number: ");
		if (!isdigit(value[i]))
			throw	std::invalid_argument("Error: Value is not valid: ");
	}
	result = std::atoi(value.c_str());
	if (result < 0 || result > 1000)
		throw	std::invalid_argument("Error: too large a number.");
}

void	BitcoinExchange::get_value( std::string line , std::string& value)
{
	int			delimiter;

	delimiter = line.find('|');
	if (delimiter == (int)std::string::npos)
		throw	std::invalid_argument("Error: Not found delimiter: ");
	value = line.substr(delimiter + 2, line.length());
}

void	BitcoinExchange::print_value(std::string line)
{
	std::string	value;
	float	valor_DataBase;

	try {
		get_value(line, value);
		valid_value(value);
		valor_DataBase = get_value_DataBase(_key);
		valor_DataBase = std::atof(value.c_str()) * valor_DataBase;
		std::cout << _key << " => ";
		std::cout << value << " = " << valor_DataBase<< std::endl;
	}catch (std::invalid_argument &e) {
		std::cout << e.what() << std::endl;
	}
}

/******************************************************************************/
/*                           Print Formated                                   */
/******************************************************************************/

void	BitcoinExchange::handle_title()
{
	std::string	line;
	std::getline(_input, line);
	if (line == "date | value")
		return ;
	get_valid_key(line);
	print_value(line);

}

void	BitcoinExchange::print_formated(char *name)
{
	std::string	line;
	if (!open_file(name))
		return ;
	handle_title();
	while (std::getline(_input, line))
	{
		if (get_valid_key(line))
			print_value(line);
	}
}
