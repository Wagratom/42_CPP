/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:39:27 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/07 12:26:45 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>

const char*	RobotomyRequestForm::GradeTooLowException::what() const throw(){
	return ("Error: unable to execute");
}

/*###################		Constructors				   ###################*/

RobotomyRequestForm::RobotomyRequestForm( std::string destiny ) : AForm( "RobotomyRequestForm", 72, 45), _destiny(destiny){
	std::cout << "Default constructor called RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &src )  : AForm( "RobotomyRequestForm", 72, 45), _destiny(src._destiny) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Destructor called" << std::endl;
}

/*###################			Getts					   ###################*/

std::string RobotomyRequestForm::getDestiny( void ) const{
	return (this->_destiny);
}

/*###################			Init					   ###################*/

void	RobotomyRequestForm::canExecute(Bureaucrat const& executor)
{
	if (getSigned() == false)
		std::cout << "Error: Signature is not signed ";
	else if (executor.getGrade() > getGradeExecute())
		std::cout << "Error: You don't have enough points ";
	else
		return ;
	throw RobotomyRequestForm::GradeTooLowException();
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
		canExecute(executor);
		tryExecute();
	}
	catch (std::exception &obj){
		std::cout << obj.what() << std::endl;
	}
}

/*###################			Operators				   ###################*/

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	(std::string)this->_destiny = src._destiny;
	return (*this);
}
