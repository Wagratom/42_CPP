/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:56:07 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/15 14:18:33 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>

class BitcoinExchange
{
	private:
		std::ifstream									_input;
		std::map< std::string, std::string >			_DataBase;
		std::map< std::string, std::string >::iterator	_it;
		std::string										_key;

	public:
		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange& src );
		~BitcoinExchange( void );

		bool	open_file( char* name );
		bool	create_map( void );

		void	handle_title( void );

		void	print_formated(char *name);

		bool	get_valid_key( std::string line );
		void	get_data( std::string line , std::string& data);
		void	valid_data( std::string& data);

		void	print_value(std::string line);
		void	get_value( std::string line , std::string& value);
		void	valid_value( std::string& value);

		float	get_value_DataBase( std::string& key);


};
