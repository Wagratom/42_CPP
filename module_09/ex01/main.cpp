/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wallas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:29:53 by wallas-           #+#    #+#             */
/*   Updated: 2023/03/09 22:29:53 by wallas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>

void	test_invalid_expression( void )
{
	RPN rpn("a");
	RPN rpn1("10a");
	RPN rpn2("10.");
	RPN rpn3("2 0 +");
}
int main( void )
{
	test_invalid_expression();
	return (0);
}
