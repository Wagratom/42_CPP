/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:48:50 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/17 15:49:21 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>

class Replace
{
	public:
		Replace( std::string str1, std::string str2 );
		~Replace( void );

		bool	open_input( char* name );
		bool	get_text_input( char* file_name);


		bool	open_output( std::string name );
		void	subst_str1_str2(size_t init_position);
		bool	get_position_str1(size_t& initial_position);
		bool	write_text_replace( std::string name );


	private:
		std::ifstream	_input;
		std::ofstream	_output;
		std::string		_text_input;
		std::string		_str1;
		std::string		_str2;
};
