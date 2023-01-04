/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:39:27 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/04 12:19:54 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>

const char*	RobotomyRequestForm::GradeTooLowException::what() const throw(){
	return ("Error: unable to execute");
}

RobotomyRequestForm::RobotomyRequestForm( std::string destiny ) : AForm( "RobotomyRequestForm", 72, 45), _destiny(destiny){
	std::cout << "Default constructor called RobotomyRequestForm" << std::endl;
}


RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Destructor called" << std::endl;
}

std::string RobotomyRequestForm::getDestiny( void ) const{
	return (this->_destiny);
}

bool	RobotomyRequestForm::canExecute(Bureaucrat const& executor)
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

void	tryExecute( void ){
	if (rand() % 2 == 0)
		std::cout << "robotomy failed" << std::endl;
	else
	{
		std::cout << "Tchac-tchac-tchac" << std::endl;
		std::cout << "Vrum Vrum Vrum" << std::endl;
	}
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) {
	try{
		if (canExecute(executor) == false)
			throw RobotomyRequestForm::GradeTooLowException();
		tryExecute();
	}
	catch (std::exception &obj){
		std::cout << obj.what() << std::endl;
	}
}
