/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_expression.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:19:26 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/10 18:52:13 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>

int	RPN::is_operator( char c )
{
	for (int i = 0; _operators[i].op; i++)
	{
		if (_operators[i].op == c)
			return (i);
	}
	return (-1);
}

void	RPN::is_valid_char( char c, bool is_spaces)
{
	if (is_spaces && c != ' ')
		throw std::invalid_argument("Invalid spaces in expression");
	if (is_spaces)
		return ;
	if (!isdigit(c) && is_operator(c) == -1)
		throw std::invalid_argument("Value in expression is not a digit");
}

bool	RPN::check_expression( std::string expression )
{
	for (int i = 0; expression[i]; i++) {
		is_valid_char(_expression[i], (i % 2 != 0));
	}
	return (true);
}
