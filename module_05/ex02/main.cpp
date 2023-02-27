/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:29:45 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 17:13:59 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

void	test_Presidential( void )
{
	Bureaucrat	*cleitin;
	Bureaucrat	*junin;
	PresidentialPardonForm	*president;

	try {
		cleitin = new Bureaucrat("cleitin", 25);
		junin = new Bureaucrat("junin", 5);
		president = new PresidentialPardonForm("Sideshow Bob");

		std::cout << std::endl;
		president->beSigned(*cleitin);
		cleitin->signForm(*president);
		cleitin->executeForm(*president);

		std::cout << std::endl;
		president->beSigned(*junin);
		junin->signForm(*president);
		junin->executeForm(*president);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	delete president;
	delete cleitin;
	delete junin;
}

void	test_Shrubbery( void )
{
	Bureaucrat	*cleitin;
	Bureaucrat	*junin;
	ShrubberyCreationForm	*president;

	try {
		cleitin = new Bureaucrat("cleitin", 145);
		junin = new Bureaucrat("junin", 5);
		president = new ShrubberyCreationForm("LUFFYYY");

		std::cout << std::endl;
		president->beSigned(*cleitin);
		cleitin->signForm(*president);
		cleitin->executeForm(*president);

		std::cout << std::endl;
		president->beSigned(*junin);
		junin->signForm(*president);
		junin->executeForm(*president);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	delete president;
	delete cleitin;
	delete junin;
}


void	test_Robotomy( void )
{
	Bureaucrat	*cleitin;
	Bureaucrat	*junin;
	RobotomyRequestForm	*president;

	try {
		cleitin = new Bureaucrat("cleitin", 45);
		junin = new Bureaucrat("junin", 5);
		president = new RobotomyRequestForm("Sideshow Bob");

		std::cout << std::endl;
		president->beSigned(*cleitin);
		cleitin->signForm(*president);
		cleitin->executeForm(*president);

		std::cout << std::endl;
		president->beSigned(*junin);
		junin->signForm(*president);
		junin->executeForm(*president);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	delete president;
	delete cleitin;
	delete junin;
}

int	main ( void )
{
	// test_Presidential();
	// test_Robotomy();
	test_Shrubbery();
	return (0);
}