/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:29:45 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/02 11:38:09 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <Form.hpp>

void	test_grade_less( void )
{
	std::cout << "\t Test grid high than zero " << std::endl;

	try {
		Form("Form1", 0, 10);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form("Form2", 10, 0);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void	test_grade_very( void )
{
	std::cout << "\t Large test greater than 150 " << std::endl;

	try {
		Form("Form1", 151, 10);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form("Form2", 10, 151);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

}

void	test_grade_valid( void )
{
	std::cout << "\t test valid " << std::endl;
	try {
		Form		teacher("teacher", 5, 10);
		Bureaucrat	cleitin("cleitin", 5);

		std::cout << std::endl;
		std::cout << teacher << std::endl;
		std::cout << cleitin << std::endl;
		cleitin.signForm(teacher);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\t invalid nota valid " << std::endl;
	Form		*One;
	Bureaucrat	*Shanks;
	try {
		One = new Form("ReiDosPirata", 1, 10);
		Shanks = new Bureaucrat("Shanks", 2);

		std::cout << std::endl;
		std::cout << *One << std::endl;
		std::cout << *Shanks << std::endl;
		Shanks->signForm(*One);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	delete One;
	delete Shanks;
}

int	main ( void )
{
	// test_grade_less();
	// test_grade_very();
	test_grade_valid();

	return (0);
}