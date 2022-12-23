/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 10:45:31 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/23 11:14:52 by wwallas-         ###   ########.fr       */
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

t_dic*	Harl::dictionary( void )
{
	static t_dic	dicti[] =	{ (t_dic){"DEBUG", &Harl::debug},
						(t_dic){"INFO", &Harl::info},
						(t_dic){"WARNING", &Harl::warning},
						(t_dic){"ERROR", &Harl::error},
						};
	return (dicti);
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
	_function = get_functions(dictionary(), level);
	if (_function != NULL)
		(this->*_function)();
	else
		std::cout << "Error: Previous level does not exist" << std::endl;
}


