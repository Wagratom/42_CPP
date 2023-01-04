/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:39:27 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/04 12:19:24 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>

const char*	PresidentialPardonForm::GradeTooLowException::what() const throw(){
	return ("Error: unable to execute");
}

PresidentialPardonForm::PresidentialPardonForm( std::string destiny ) : AForm("PresidentialPardonForm", 25, 5), _destiny(destiny) {
	std::cout << "Default constructor called PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Destructor called" << std::endl;
}

std::string PresidentialPardonForm::getDestiny( void ) const{
	return (this->_destiny);
}

void	creat_file(std::string fileName) {
	std::ofstream  file(fileName.c_str());
	if (!file.is_open())
		std::cout << "Error: not open file" << std::endl;
	else
		file << LUFFY;
}

bool	PresidentialPardonForm::canExecute(Bureaucrat const& executor)
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

void	PresidentialPardonForm::execute(Bureaucrat const& executor) {
	try{
		if (canExecute(executor) == false)
			throw PresidentialPardonForm::GradeTooLowException();
		creat_file(this->_destiny + std::string("_shrubbery"));
	}
	catch (std::exception &obj){
		std::cout << obj.what() << std::endl;
	}
}

