/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:06:57 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 11:07:02 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

const char*	AForm::GradeTooHighException::what() const throw() {
	return ("Error: Grade is too high");
}

const char*	AForm::GradeTooLowException::what() const throw() {
	return ("Error: Grade is too low");
}

AForm::AForm( void ) : _name(""), _grade(0), _gradeExecute(0), _signed(false) {
	std::cout << "AForm: Default constructor called" << std::endl;
}

AForm::AForm( const AForm& obj )
: _name(obj._name), _grade(obj._grade), _gradeExecute(obj._gradeExecute), _signed(obj._signed) {
	std::cout << "AForm: Default constructor called" << std::endl;
}

AForm::AForm( std::string name, const int grade, const int gradeExecute )
: _name(name), _grade(grade), _gradeExecute(gradeExecute), _signed(false)
{
	std::cout << "AForm: Default constructor called" << std::endl;
	if (_grade < 1 || gradeExecute < 1)
		throw AForm::GradeTooHighException();
	if (_grade > 150 || gradeExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm( void ) {
	std::cout << "AForm: Destructor called" << std::endl;
}

const std::string	AForm::getName( void ) const {
	return (this->_name);
}

int	AForm::getGrade( void ) const {
	return (this->_grade);
}

int	AForm::getGradeExecute( void ) const {
	return (this->_gradeExecute);
}

bool	AForm::getSigned( void ) const {
	return (this->_signed);
}

void	AForm::beSigned( Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGrade())
		throw GradeTooLowException();
	this->_signed = true;
}

std::ostream&	operator<<(std::ostream& old, const AForm& obj)
{
	old << "Name:         " << obj.getName() << std::endl;
	old << "Grade:        " << obj.getGrade() << std::endl;
	old << "GradeExecute: " << obj.getGradeExecute() << std::endl;
	old << "Signed:       " << obj.getSigned() << std::endl;

	return (old);
}

AForm&	AForm::operator=( const AForm& obj)
{
	(std::string)this->_name = obj.getName();
	(int&)this->_grade = obj.getGrade();
	(int&)this->_gradeExecute = obj.getGradeExecute();
	this->_signed = obj.getSigned();
	return (*this);
}
