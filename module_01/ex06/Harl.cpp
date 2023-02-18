/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:26:14 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/18 10:47:26 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

Harl::Harl( void ) {
}

Harl::~Harl( void ) {
}

void	Harl::create_dictionary()
{
	static t_dictionary dic[] = {{"DEBUG", &Harl::debug},
								{"INFO", &Harl::info},
								{"WARNING", &Harl::warning},
								{"ERROR", &Harl::error},
								{"", NULL}};

	this->dict = dic;
}

void	Harl::debug( void ) {
	std::cout << DEBUG << std::endl;
}
void	Harl::info( void ) {
	std::cout << INFO << std::endl;
}

void	Harl::warning( void ) {
	std::cout << WARNING << std::endl;
}

void	Harl::error( void ) {
	std::cout << ERROR << std::endl;
}

int	Harl::get_int_level( std::string level )
{
	int	index = -1;

	create_dictionary();
	while ((dict[++index].function))
	{
		if (level == dict[index].level)
			return (index);
	}
	return (index);
}
void	Harl::complain( std::string level )
{
	int lvl;

	lvl = get_int_level(level);
	switch (lvl)
	{
		case (0):
			debug();
			// intentional fall-through
		case (1):
			info();
			// intentional fall-through
		case (2):
			warning();
			// intentional fall-through
		case (3):
			error();
			break;
		default:
			std::cout << "Invalid level." << std::endl;
			break;
	}
}
