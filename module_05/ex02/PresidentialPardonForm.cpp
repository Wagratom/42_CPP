/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:39:27 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/07 12:25:57 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>

const char*	PresidentialPardonForm::GradeTooLowException::what() const throw(){
	return ("unable to execute");
}

/*###################		Constructors				   ###################*/

PresidentialPardonForm::PresidentialPardonForm( std::string destiny ) : AForm("PresidentialPardonForm", 25, 5), _destiny(destiny) {
	std::cout << "Default constructor called PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src)  : AForm("PresidentialPardonForm", 25, 5), _destiny(src._destiny) {
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Destructor called" << std::endl;
}

/*###################			Getts					   ###################*/

std::string PresidentialPardonForm::getDestiny( void ) const{
	return (this->_destiny);
}

/*###################			Init					   ###################*/

void	creat_file(std::string fileName)
{
	std::ofstream  file(fileName.c_str());
	if (!file.is_open())
		std::cout << "Error: not open file" << std::endl;
	else
		file << LUFFY;
}

void	PresidentialPardonForm::canExecute(Bureaucrat const& executor)
{
	if (getSigned() == false)
		std::cout << "Signature is not signed ";
	else if (executor.getGrade() > getGradeExecute())
		std::cout << "You don't have enough points to execute ";
	else
		return ;
	throw PresidentialPardonForm::GradeTooLowException();
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor)
{
	try{
		canExecute(executor);
		creat_file(this->_destiny + std::string("_shrubbery"));
	}
	catch (std::exception &obj){
		std::cout << obj.what() << std::endl;
	}
}

/*###################			Operators				   ###################*/

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	(std::string)this->_destiny = src._destiny;
	return (*this);
}
