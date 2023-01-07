/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:49:37 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/07 12:01:54 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

/*###################			Ulsts					   ###################*/

const char*	Intern::GradeTooLowException::what() const throw (){
	return ( "\nInvalid name passed, valid names \npresidential pardon\nshrubbery creation\nrobotomy request" );
}

t_dictionary*	Intern::dictionary( void ) const {
	static t_dictionary	dicti[] =	{
						(t_dictionary){ "presidential pardon", &Intern::Presidential},
						(t_dictionary){"shrubbery creation", &Intern::Shrubbery},
						(t_dictionary){"robotomy request", &Intern::Robotomy},
						(t_dictionary){"end", NULL},
						};
	return (dicti);
}

/*###################		Constructors				   ###################*/

Intern::Intern( void ) : _dictionary(dictionary()) {
	std::cout << "Default constructor called Intern" << std::endl;
}

Intern::Intern( Intern const &src ) : _dictionary(src.dictionary()) {
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
}

Intern::~Intern() {
	std::cout << "destructor called" << std::endl;
}

/*###################			Init					   ###################*/

AForm*	Intern::Presidential( std::string destiny) {
	return (new PresidentialPardonForm(destiny));
}

AForm*	Intern::Shrubbery( std::string destiny ) {
	return (new ShrubberyCreationForm(destiny));
}

AForm*	Intern::Robotomy( std::string destiny ) {
	return (new RobotomyRequestForm(destiny));
}

AForm*	Intern::getCorrectForm( std::string name, std::string target )
{
	int	i = -1;

	while (this->_dictionary[++i].value != NULL)
	{
		if (this->_dictionary[i].key != name)
			continue ;
		std::cout << "Intern creates "<< name << std::endl;
		return ((this->*_dictionary[i].value)(target));
	}
	throw Intern::GradeTooLowException();
	return (NULL);
}

void	Intern::tryExecute( AForm*& aux, std::string target)
{
	std::string name;

	std::cout << "Please pass a valid name this time: ";
	std::getline(std::cin, name);
	aux = makeForm(name, target);
}

AForm*	Intern::makeForm( std::string name, std::string target )
{
	AForm*	object;

	try {
		object = getCorrectForm(name, target);
	}
	catch(std::exception& obj) {
		std::cout << obj.what() << std::endl;
		tryExecute(object, target);
	}
	return (object);
}

/*###################			Operators				   ###################*/

Intern&	Intern::operator=( Intern const &src) {
	return (*this);
}
