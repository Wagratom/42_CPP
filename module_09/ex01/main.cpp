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
	std::cout << "\tTest invalid expression" << std::endl;
	try {
		RPN rpn("a");
		RPN rpn1("1a");
		RPN rpn2("1 a +");
		RPN rpn4("10 +");
		std::cout << std::endl;
	}catch (std::invalid_argument& e) {
		std::cerr << e.what() << std::endl;
	}
}

void	test_basic( void )
{
	std::cout << "\tTest basic" << std::endl;
	try {
		RPN add("2 5 +");
		RPN sub("2 5 -");
		RPN mul("2 5 *");
		RPN div("2 5 /");
		RPN invalid("2 5 3 +");

		std:: cout << "add " << add.result_rpn() << std::endl;
		std:: cout << "sub " << sub.result_rpn() << std::endl;
		std:: cout << "mul " << mul.result_rpn() << std::endl;
		std:: cout << "div " << div.result_rpn() << std::endl;
		std:: cout << "div " << invalid.result_rpn() << std::endl;
		std::cout << std::endl;
	} catch (std::invalid_argument& e) {
		std::cerr << e.what() << std::endl;
	}
}

void	test_avanced( void )
{
	std::cout << "\tTest avanced" << std::endl;
	try {
		RPN add("2 5 5 + +");
		RPN mul("2 5 5 * +");
		RPN div("2 5 5 / +");

		std:: cout << "add " << add.result_rpn() << std::endl;
		std:: cout << "mul " << mul.result_rpn() << std::endl;
		std:: cout << "div " << div.result_rpn() << std::endl;
		std::cout << std::endl;
	} catch (std::invalid_argument& e) {
		std::cerr << e.what() << std::endl;
	}
}

int main( int argc, char **argv )
{
	if (argc >= 2)
	{
		try{
			RPN	resolve(argv[1]);
			std::cout << resolve.result_rpn() << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	// test_invalid_expression();
	// test_basic();
	// test_avanced();
	return (0);
}
