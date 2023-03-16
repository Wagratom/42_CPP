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
/*                          auxiliary functions                               */
/******************************************************************************/

int	add(int a, int b) {
	return (a + b);
}

int	subtract(int a, int b) {
	return (a - b);
}

int	multiply(int a, int b) {
	return (a * b);
}

int	divide(int a, int b)
{
	if (a == 0 || b == 0)
		throw std::invalid_argument("division by zero is not allowed");
	return (a / b);
}

t_operators*	create_structure( void )
{
	static t_operators	operators[5] = {
		{'+', add},
		{'-', subtract},
		{'*', multiply},
		{'/', divide},
		{0, NULL}
	};
	return (operators);
}

/******************************************************************************/
/*                        Constructors Destructors                            */
/******************************************************************************/
RPN::RPN( void ) : _expression(""), _stack(), _operators(NULL){
}

RPN::RPN( std::string expression ):
		_expression(expression),
		_stack(),
		_operators(create_structure())
{
	check_expression(_expression);
}

RPN::RPN( const RPN& src ) : std::stack<int>(src), _operators(create_structure()) {
	*this = src;
}

RPN::~RPN( void ) {
}

/******************************************************************************/
/*                             Functions members                              */
/******************************************************************************/

void	RPN::get_numbers( int& value1, int& value2)
{
	if (_stack.size() < 2)
		throw	std::range_error("trying to perform an invalid operation");
	value2 = _stack.top(); _stack.pop();
	value1 = _stack.top(); _stack.pop();
}

void	RPN::resolve_operation(char op)
{
	int	value1, value2;

	for (int i = 0; _operators[i].op; i++)
	{
		if (op == _operators[i].op)
		{
			get_numbers(value1, value2);
			_stack.push(_operators[i].f(value1, value2));
			return ;
		}
	}
	std::string err("invalid operator ");
	err += std::string(1, op);
	err += " found";
	throw std::invalid_argument(err);
}

int	RPN::result_rpn( void )
{
	for (int i = 0; _expression[i]; i++)
	{
		if (_expression[i] == ' ')
			i++;
		if (isdigit(_expression[i]))
			_stack.push(_expression[i] - '0');
		else
			resolve_operation(_expression[i]);
	}
	if (_stack.size() != 1)
		throw std::runtime_error("Invalid expression: The stack does not contain exactly one value at the end of the evaluation.");
	return (_stack.top());
}

RPN& RPN::operator=( const RPN& rhs ) {
	this->_expression = rhs._expression;
	this->_stack = rhs._stack;
	return (*this);
}
