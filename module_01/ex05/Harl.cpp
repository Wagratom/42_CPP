/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:26:14 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/18 10:20:49 by wwalas-          ###   ########.fr       */
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

void	Harl::complain( std::string level )
{
	int	index = -1;

	create_dictionary();
	while ((dict[++index].function))
	{
		if (level == dict[index].level)
			(this->*(dict[index].function))();
	}
}
