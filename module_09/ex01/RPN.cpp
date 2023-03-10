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

/******************************************************************************/
/*                             Functions members                              */
/******************************************************************************/

void	RPN::check_get_numbers( int& value1, int& value2)
{
	if (_stack.size() < 2)
		throw	std::range_error("trying to perform an invalid operation");
	value1 = _stack.top(); _stack.pop();
	value2 = _stack.top(); _stack.pop();
}

bool	RPN::resolve_operation(int op)
{
	int	value1, value2;

	for (int i = 0; _operators[i].op; i++)
	{
		if (op == _operators[i].op)
		{
			try{
				check_get_numbers(value1, value2);
				_stack.push(_operators[i].f(value1, value2));
				return (true);
			} catch(std::exception& e) {
				std::cout << e.what() << std::endl;
				return (false);
			}
		}
	}
	return (false);
}

void	RPN::result_rpn( void )
{
	int	i = -1;
	while(_expression[++i])
	{
		if (isdigit(_expression[i]))
			_stack.push(_expression[i++] - '0');
		else
		{
			if (resolve_operation(_expression[i]) == false)
				return ;
		}
	}
}

RPN& RPN::operator=( const RPN& rhs ) {
	this->_expression = rhs._expression;
	return (*this);
}
