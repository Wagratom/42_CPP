/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:26:14 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/18 10:55:37 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl;

typedef struct s_dictionary
{
	std::string	level;
	void (Harl::*function)(void);
} t_dictionary;

class Harl
{
	public:
		Harl( void );
		~Harl( void );

		void	create_dictionary( void );
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

		void complain( std::string level );

	private:
		t_dictionary	*dict;
};

# define DEBUG "[ DEBUG ]\nI'm playing too much I don't think I'll be able to deliver the cpp in time"
# define INFO "[ INFO ]\nIf I don't deliver all the lists by the 14th, I won't receive the scholarship :("
# define WARNING "[ WARNING ]\nIt's already the 18th and I haven't even delivered list 2 yet :'("
# define ERROR "[ ERROR ]\nIn that time I'll only be able to deliver by collando XD, since there's no other way, lest go"
