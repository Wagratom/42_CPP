/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wallas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:31:29 by wallas-           #+#    #+#             */
/*   Updated: 2023/03/09 22:31:29 by wallas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <stack>

typedef struct s_operators
{
	char	op;
	int		(*f)(int, int);
}				t_operators;

class RPN;

class RPN : public std::stack<int>
{
	public:
		RPN( void );
		RPN( std::string expression );
		RPN( const RPN& src );
		~RPN( void );

		bool		check_expression( std::string expression );
		void		is_valid_char( char c, bool is_spaces);
		int			is_operator( char c);

		void		check_get_numbers( int& value1, int& value2 );
		bool		resolve_operation(int op);
		void	result_rpn( void );

		RPN&	operator=( const RPN& rhs );

	private:
		std::string		_expression;
		std::stack<int>	_stack;
		t_operators*	_operators;
};


