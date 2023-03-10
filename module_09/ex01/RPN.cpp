/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wallas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:31:22 by wallas-           #+#    #+#             */
/*   Updated: 2023/03/09 22:31:22 by wallas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>


/******************************************************************************/
/*                          create data structure                             */
/******************************************************************************/

int	RPN::add(int a, int b)
{
	if (_stack.size())
		return (false);
	int	top = _stack.top(); _stack.pop();
	int top2 = _stack.top(); _stack.pop();
	return (a + b);
}

int	RPN::subtract(int a, int b) {
	return (a - b);
}

int	RPN::multiply(int a, int b) {
	return (a * b);
}

int	RPN::divide(int a, int b) {
	return (a / b);
}

RPN::RPN( void ) : _expression(""), _stack(){
}

RPN::RPN( std::string expression ) : _expression(expression), _stack()
{
	try{
		check_expression(_expression);
	} catch (std::invalid_argument& e) {
		std::cout << e.what() << std::endl;
	}
}

RPN::RPN( const RPN& src ) :
	std::stack<int>(src),
	_expression(src._expression),
	 _stack(src._stack)
{
	try{
		check_expression(_expression);
	} catch (std::invalid_argument& e) {
		std::cout << e.what() << std::endl;
	}

	*this = src;
}

RPN::~RPN( void ) {
}

void	RPN::result_rpn( void )
{
	int	i = -1;
	while(_expression[++i])
	{
		if (isdigit(_expression[i]))
			_stack.push(_expression[i++] - '0');
		else if (_stack.size())
			throw	std::range_error()
		switch (is_operator(_expression[i]))
		{
		case 0: {
			_stack.push(add(top, top2));
			break ;
		}
		case 1: {
			_stack.push(subtract(top, top2));
			break ;
		}
		default:
			break;
		}
	}
}

RPN& RPN::operator=( const RPN& rhs ) {
	this->_expression = rhs._expression;
	return (*this);
}
