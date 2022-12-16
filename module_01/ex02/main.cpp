/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:36:34 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/15 12:04:28 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main( void )
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "address of the string " << &string << std::endl;
	std::cout << "address of the stringPTR " << stringPTR << std::endl;
	std::cout << "address of the stringREF " << &stringREF << std::endl;

	std::cout << "\nvalue of the string variable " << string << std::endl;
 	std::cout << "value pointed to by stringPTR " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF " << stringREF << std::endl;

	std::cout << "\nupdate variable string to \"HI NOT IS BRAIN\"\n" << std::endl;
	string = "HI NOT IS BRAIN";

	std::cout << "value of the string variable " << string << std::endl;
 	std::cout << "value pointed to by stringPTR " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF " << stringREF << std::endl;
}

