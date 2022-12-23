/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 10:45:31 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/23 11:27:47 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n";
	std::cout << DEBUG;
	std::cout << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]\n";
	std::cout << INFO;
	std::cout << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]\n";
	std::cout << WARNING;
	std::cout << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]\n";
	std::cout << ERROR;
	std::cout << std::endl;
}

std::string	*levels(void)
{
	static std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	return (levels);
}

int	get_number_level(std::string *levels, std::string level)
{
	int	nbr_level;

	nbr_level = 0;
	while (nbr_level < 4 && levels[nbr_level] != level)
		nbr_level++;
	return (nbr_level);
}

void	Harl::complain( std::string level)
{
	int	nbr_level;

	nbr_level = get_number_level(levels(), level);
	switch (nbr_level)
	{
		case (0):
			debug();
			// fall through
		case (1):
			info();
			// fall through
		case (2):
			warning();
			// fall through
		case (3):
			error();
			break;
		default:
			std::cout << "Error: Past level does not exist" << std::endl;
	}
}
