/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:49:37 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/04 23:02:29 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

const char*	Intern::GradeTooLowException::what() const throw (){
	return ( "\nName passed not valid, Choose a valid Names : \npresidential pardon \nshrubbery creation\nrobotomy request" );
}

t_dictionary*	Intern::dictionary( void ) {
	static t_dictionary	dicti[] =	{
						(t_dictionary){ "presidential pardon", &Intern::Presidential},
						(t_dictionary){"shrubbery creation", &Intern::Shrubbery},
						(t_dictionary){"robotomy request", &Intern::Robotomy},
						(t_dictionary){"end", NULL},
						};
	return (dicti);
}

Intern::Intern( void ) : _dictionary(dictionary()) {
	std::cout << "Default constructor called Intern" << std::endl;
}

Intern::~Intern() {
	std::cout << "destructor called" << std::endl;
}

AForm*	Intern::Presidential( std::string destiny) {
	return (new PresidentialPardonForm(destiny));
}

AForm*	Intern::Shrubbery( std::string destiny ) {
	return (new ShrubberyCreationForm(destiny));
}

AForm*	Intern::Robotomy( std::string destiny ) {
	return (new RobotomyRequestForm(destiny));
}

AForm*	Intern::get_function( std::string name, std::string target )
{
	int	i = -1;

	while (this->_dictionary[++i].value != NULL)
	{
		if (this->_dictionary[i].key != name)
			continue ;
		std::cout << "Intern creates "<< name << std::endl;
		return ((this->*_dictionary[i].value)(target));
	}
	return (NULL);
}

bool	Intern::try_execute( AForm** aux, std::string target)
{
	std::string name;

	std::cout << "Please pass a valid name this time: ";
	std::getline(std::cin, name);
	*aux = get_function(name, target);
	if (*aux)
		return (true);
	return (false);
}

AForm*	Intern::makeForm( std::string name, std::string target )
{
	AForm*	object = get_function(name, target);
	try {
		if (object == NULL)
			throw Intern::GradeTooLowException();
	}
	catch(std::exception& obj) {
		std::cout << obj.what() << std::endl;
		while (!try_execute(&object, target));
	}
	return (object);
}
