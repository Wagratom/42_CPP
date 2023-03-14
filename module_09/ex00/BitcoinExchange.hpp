/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:56:07 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/14 16:56:40 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange
{
	private:
		std::ifstream	_input;
		std::string		_text_input;
		std::map< std::string, std::string > _DataBase;

	public:
		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange& src );
		~BitcoinExchange( void );

		bool	open_input( char* filename);
		bool	open_file( char* name );
		bool	create_map( void );
};
