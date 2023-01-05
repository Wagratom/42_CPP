/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:39:27 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/04 12:19:05 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

const char*	ShrubberyCreationForm::GradeTooLowException::what() const throw(){
	return ("Error: unable to execute");
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string destiny ) : AForm("ShrubberyCreationForm", 145, 137), _destiny(destiny) {
	std::cout << "Default constructor called ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Destructor called" << std::endl;
}

std::string	ShrubberyCreationForm::getDestiny( void ) const{
	return (this->_destiny);
}

bool	ShrubberyCreationForm::canExecute(Bureaucrat const& executor)
{
	if (getSigned() == false)
	{
		std::cout << "Signature is not signed" << std::endl;
		return (false);
	}
	if (executor.getGrade() > getGradeExecute())
	{
		std::cout << "You don't have enough points to execute" << std::endl;
		return (false);
	}
	return (true);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) {
	try{
		if (canExecute(executor) == false)
			throw ShrubberyCreationForm::GradeTooLowException();
		std::cout << getDestiny() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	catch (std::exception &obj){
		std::cout << obj.what() << std::endl;
	}
}
