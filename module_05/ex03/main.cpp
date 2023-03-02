/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:29:45 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/02 12:51:54 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <Intern.hpp>

int	main ( void )
{
	Intern		someRandomIntern;
	AForm*		rrf;
	Bureaucrat*	junin;

	// "presidential pardon"
	// "shrubbery creation"
	try {
		junin = new Bureaucrat("junin", 1);
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

		std::cout << std::endl;
		junin->signForm(*rrf);
		junin->executeForm(*rrf);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	delete junin;
	delete rrf;
	return (0);
}