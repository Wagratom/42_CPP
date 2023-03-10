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

class RPN;

class RPN : public std::stack<int>
{
	public:
		RPN( void );
		RPN( std::string expression );
		RPN( const RPN& src );
		~RPN( void );

		void	result_rpn( void );
		RPN&	operator=( const RPN& rhs );

		int		add(int a, int b);
		int		subtract(int a, int b);
		int		multiply(int a, int b);
		int		divide(int a, int b);

	private:
		std::string	_expression;
		std::stack<int>	_stack;
};


void		check_expression( std::string expression );
int			is_operator( char c );
