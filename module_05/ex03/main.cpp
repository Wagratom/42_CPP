/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:36:33 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/04 23:04:06 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>


int main () {
	Bureaucrat bureaucrat("thomas", 1);

	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	rrf->beSigned(bureaucrat);
	rrf->execute(bureaucrat);
	delete rrf;

	rrf = someRandomIntern.makeForm("request", "Bender");
	delete rrf;
}
