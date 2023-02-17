/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:04:39 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/17 11:13:44 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
	std::string		string =  "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "string    " << &string << std::endl;
	std::cout << "stringPTR " << stringPTR << std::endl;
	std::cout << "stringREF " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "string    " << string << std::endl;
	std::cout << "stringPTR " << *stringPTR << std::endl;
	std::cout << "stringREF " << stringREF << std::endl;
	std::cout << std::endl;

	string = "HI NOT THIS IS BRAIN";

	std::cout << "string    " << string << std::endl;
	std::cout << "stringPTR " << *stringPTR << std::endl;
	std::cout << "stringREF " << stringREF << std::endl;

	return (0);
}
