/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:48:50 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/19 13:35:52 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Replace.hpp>

Replace::Replace(std::string str1, std::string str2) : _str1(str1), _str2(str2) {

}

Replace::~Replace( void ) {
}

bool	Replace::open_input( char* name )
{
	_input.open(name);
	if (_input.is_open())
		return (true);
	std::cout << "Error: Not crete input file" << std::endl;
	return (false);
}

bool	Replace::get_text_input( char* file_name)
{
	std::string		line;

	if (!open_input(file_name))
		return (false);
	while (std::getline(_input, line))
		_text_input += (line += "\n");
	_input.close();
	return (true);
}

bool	Replace::open_output( std::string name )
{
	std::string	name_outfile = name + ".replace";

	_output.open(name_outfile.c_str());
	if (_output.is_open())
		return (true);
	std::cout << "Error: Not creta output file" << std::endl;
	return (false);
}

void	Replace::subst_str1_str2(size_t init_position)
{
	// int	len_str2;

	// len_str2 = _str2.size();
	// if (_text_input[init_position + len_str2] != ' ')
	// 	return ;
	_text_input.erase(init_position, _str1.size());
	_text_input.insert(init_position, _str2);
}

bool	Replace::get_position_str1(size_t& initial_position)
{
	initial_position = _text_input.find(_str1.c_str());
	if (initial_position ==  std::string::npos)
		return (false);
	return (true);
}

bool	Replace::write_text_replace( std::string name )
{
	size_t	init_position;

	init_position = 1;
	if (!open_output(name))
		return (false);
	while (get_position_str1(init_position))
		subst_str1_str2(init_position);
	_output << _text_input;
	_output.close();
	return (true);
}
