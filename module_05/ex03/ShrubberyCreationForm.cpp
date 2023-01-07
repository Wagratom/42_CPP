/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:39:27 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/07 12:26:51 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

const char*	ShrubberyCreationForm::GradeTooLowException::what() const throw(){
	return ("Error: unable to execute");
}

/*###################		Constructors				   ###################*/

ShrubberyCreationForm::ShrubberyCreationForm( std::string destiny ) : AForm("ShrubberyCreationForm", 145, 137), _destiny(destiny) {
	std::cout << "Default constructor called ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src ) : AForm("ShrubberyCreationForm", 145, 137), _destiny(src._destiny) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Destructor called" << std::endl;
}

/*###################			Getts					   ###################*/

std::string	ShrubberyCreationForm::getDestiny( void ) const{
	return (this->_destiny);
}

/*###################			Init					   ###################*/

void	ShrubberyCreationForm::canExecute(Bureaucrat const& executor)
{
	if (getSigned() == false)
		std::cout << "Error: Signature is not signed ";
	else if (executor.getGrade() > getGradeExecute())
		std::cout << "Error: You don't have enough points " << std::endl;
	else
		return ;
	throw ShrubberyCreationForm::GradeTooLowException();
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) {
	try{
		canExecute(executor);
		std::cout << getDestiny() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	catch (std::exception &obj){
		std::cout << obj.what() << std::endl;
	}
}

/*###################			Operators				   ###################*/

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	(std::string)this->_destiny = src._destiny;
	return (*this);
}
