/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:36:33 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/03 12:27:51 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

int main () {
	Bureaucrat	pedrin("pedrin", 50);
	Form		police("police", 30, 10);
	Form		teacher("teacher", 50, 30);

	std::cout << police.getName() << std::endl;
	police.beSigned (pedrin);
	pedrin.signForm(police);

	std::cout << std::endl;
	teacher.getName();
	teacher.beSigned(pedrin);
	pedrin.signForm(teacher);

	std::cout << std::endl;
	std::cout << police << std::endl;

	std::cout << std::endl;
	std::cout << teacher << std::endl;
}
