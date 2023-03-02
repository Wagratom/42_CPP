/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:29:45 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/02 10:55:30 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

void	test_grade_less( void )
{
	std::cout << "\t Test grid Higth than zero " << std::endl;

	try {
		Bureaucrat("Bureaucrat1", 0);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat("Bureaucrat2", -1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void	test_grade_very( void )
{
	std::cout << "\t Large test greater than 150 " << std::endl;

	try {
		Bureaucrat("Bureaucrat1", 151);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat("Bureaucrat2", 200);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

}

void	test_grade_valid( void )
{
	try {
		Bureaucrat	Bureaucrat1("Bureaucrat1", 1);

		std::cout << Bureaucrat1 << std::endl;
		Bureaucrat1.decrement();
		std::cout << Bureaucrat1 << std::endl;
		Bureaucrat1.increment();
		std::cout << Bureaucrat1 << std::endl;
		Bureaucrat1.increment();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Bureaucrat	Bureaucrat1("Bureaucrat1", 150);

		std::cout << Bureaucrat1 << std::endl;
		Bureaucrat1.increment();
		std::cout << Bureaucrat1 << std::endl;
		Bureaucrat1.decrement();
		std::cout << Bureaucrat1 << std::endl;
		Bureaucrat1.decrement();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

}

int	main ( void )
{
	test_grade_less();
	test_grade_very();
	test_grade_valid();

	return (0);
}