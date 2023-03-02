/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:16:15 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/02 12:11:57 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

char const*	Intern::exceptionForm::what() const throw() {
	return ("Not create Form");
}

Intern::Intern( void ) {
	std::cout << "Intern: Default construcotr called" << std::endl;
}

Intern::Intern( const Intern& obj ) {
	std::cout << "Intern: Copy construcotr called" << std::endl;
	*this = obj;
}
Intern::~Intern( void ) {
	std::cout << "Intern: Destructor called" << std::endl;
}

t_dictionary*	Intern::create_dictionary()
{
	t_dictionary static dic[] = {
		{"presidential pardon", &Intern::create_PresidentialPardon},
		{"robotomy request", &Intern::create_RobotomyRequest},
		{"shrubbery creation", &Intern::create_ShrubberyCreation},
		{"", NULL},
	};
	return (dic);
}

AForm*   Intern::create_PresidentialPardon( std::string target ) {
	return (new PresidentialPardonForm(target));
}

AForm*   Intern::create_RobotomyRequest( std::string target ) {
	return (new PresidentialPardonForm(target));
}

AForm*   Intern::create_ShrubberyCreation( std::string target ) {
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::makeForm( std::string name, std::string target)
{
	t_dictionary	*dic = create_dictionary();
	int				iterator;

	iterator= -1;
	while(dic[++iterator].func)
	{
		if (dic[iterator].name == name)
		{
			std::cout << "Intern creates " << target << std::endl;
			return ((this->*dic[iterator].func)(target));
		}
	}
	throw	exceptionForm();
	return (NULL);
}

Intern&	Intern::operator=( const Intern& obj)
{
	*this = obj;
	return (*this);
}