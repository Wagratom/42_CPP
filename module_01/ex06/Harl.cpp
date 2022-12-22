/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 10:45:31 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/22 15:47:28 by wwallas-         ###   ########.fr       */
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
	std::cout << "estou gostando do cpp, entretando se eu demorar mais de uma semana para terminar esse modulo vou tiltar";
	std::cout << std::endl;
}

void	Harl::info( void )
{
	std::cout << "INFO: ";
	std::cout << "Não acredito que ja passou cinco dias e eu ainda estou nesses exercicios, pelo jeito que as coisas andam acho que não terminarei nessa semana :( ";
	std::cout << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "WARNING: ";
	std::cout << "Faltam 2 dias para acabar a semana. Tenho que para de jogar e focar esses 2 dias se quiser acabar logo!";
	std::cout << std::endl;
}

void	Harl::error( void )
{
	std::cout << "ERROR: ";
	std::cout << "Passou uma semana e não conseguir completar esse module_01. Pelo menos ganhei um set full no jogo XD";
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
	std::cout << "passa um nome certo irmão" << std::endl;
}


