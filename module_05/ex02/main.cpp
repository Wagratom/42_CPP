/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:36:33 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/06 22:58:02 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main () {

    ShrubberyCreationForm shruberry("Shurumangos");
    RobotomyRequestForm roboto("Robotozinho");
    PresidentialPardonForm zaphod("Luffy");

    std::cout << "\n==== Testing Forms Failed ====\n" << std::endl;
    Bureaucrat bureaucrat("João", 150);

    shruberry.beSigned(bureaucrat);
    shruberry.execute(bureaucrat);

    roboto.beSigned(bureaucrat);
    roboto.execute(bureaucrat);

    zaphod.beSigned(bureaucrat);
    zaphod.execute(bureaucrat);

    std::cout << "\n==== Testing Forms Sucess ====\n" << std::endl;
    Bureaucrat bureaucrat1("JuninHackerMan", 3);

    shruberry.beSigned(bureaucrat1);
    shruberry.execute(bureaucrat1);

    roboto.beSigned(bureaucrat1);
    roboto.execute(bureaucrat1);

    zaphod.beSigned(bureaucrat1);
    zaphod.execute(bureaucrat1);

    std::cout << "\n==== Testing Bureaucrat Execute Forms failed ====\n" << std::endl;
    bureaucrat.executeForm(shruberry);
    bureaucrat.executeForm(roboto);
    bureaucrat.executeForm(zaphod);

    std::cout << "\n==== Testing Bureaucrat Execute Forms sucess ====\n" << std::endl;
    bureaucrat1.executeForm(shruberry);
    bureaucrat1.executeForm(roboto);
    bureaucrat1.executeForm(zaphod);

    std::cout << std::endl << std::endl;
}
