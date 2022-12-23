/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 10:45:31 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/22 22:30:22 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

t_dic*	Harl::dictionary( void )
{
	static t_dic	dicti[] =	{ (t_dic){"DEBUG", &Harl::debug},
						(t_dic){"INFO", &Harl::info},
						(t_dic){"WARNING", &Harl::warning},
						(t_dic){"ERROR", &Harl::error},
						};
	return (dicti);
}

void	Harl::debug( void )
{
	std::cout << "DEBUG: ";
	std::cout << DEBUG;
	std::cout << std::endl;
}

void	Harl::info( void )
{
	std::cout << "INFO: ";
	std::cout << INFO;
	std::cout << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "WARNING: ";
	std::cout << WARNING;
	std::cout << std::endl;
}

void	Harl::error( void )
{
	std::cout << "ERROR: ";
	std::cout << ERROR;
	std::cout << std::endl;
}

functions	get_functions(t_dic *functions, std::string chave)
{
	for (int i = 0; i < 4; i++)
	{
		if (functions[i].chave == chave)
			return (functions[i].value);
	}
	return (NULL);
}

void	Harl::complain( std::string level)
{
	function = get_functions(dictionary(), level);
	if (function != NULL)
		(this->*function)();
	else
		std::cout << "Error: Previous level does not exist" << std::endl;
}


