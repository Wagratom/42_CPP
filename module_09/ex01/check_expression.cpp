/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parameters.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:19:26 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/10 13:03:01 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>

int	is_operator( char c )
{
	return (strchr("+-*/", c));
}

void	check_expression( std::string expression )
{
	int	i = -1;

	while (expression[++i])
	{
		if (isdigit(expression[i]) && expression[i + 1] == ' ')
			continue ;
		if (is_operator(expression[i]) != -1);
			continue ;
		throw std::invalid_argument("Invalid expression");
	}
}
