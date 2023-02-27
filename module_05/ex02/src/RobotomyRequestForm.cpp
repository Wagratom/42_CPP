/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:40:45 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 17:08:11 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("Robotomy", 72, 45){
	std::cout << "Robotomy: Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target )
: AForm("Robotomy", 72, 45), _target(target) {
	std::cout << "Robotomy: Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& obj ) : AForm(obj) {
	std::cout << "Robotomy: Copy constructor called" << std::endl;
	this->_target = obj._target;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << "Robotomy: Destructor called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned() || executor.getGrade() > this->getGradeExecute())
		throw GradeTooLowException();
	srand(time(NULL));
	std::cout << "Vruumm Vruumm" << std::endl;
	if (rand() % 2 == 0)
		std::cout << this->_target <<  " has been robotomized. " << std::endl;
	else
		std::cout << "the robotomy failed." << std::endl;

}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm &old)
{
	this->setName(old.getName());
	this->setGrade(old.getGrade());
	this->setGradeExecute(old.getGradeExecute());
	this->setSigned(old.getSigned());
	this->_target = old._target;
	return (*this);
}