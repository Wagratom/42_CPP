/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:41:04 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 17:00:35 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("Presidential", 25, 5) {
	std::cout << "Presidential: Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& obj ) : AForm(obj) {
	std::cout << "Presidential: Copy constructor called" << std::endl;
	this->_target = obj._target;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target )
: AForm("Presidential", 25, 5), _target(target) {
	std::cout << "Presidential: Default constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << "Presidential: Destructor called" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned() || executor.getGrade() > this->getGradeExecute())
		throw GradeTooHighException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm &old)
{
	this->setName(old.getName());
	this->setGrade(old.getGrade());
	this->setGradeExecute(old.getGradeExecute());
	this->setSigned(old.getSigned());
	this->_target = old._target;
	return (*this);
}