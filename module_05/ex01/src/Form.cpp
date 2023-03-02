/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:16:17 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/02 11:28:25 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

const char*	Form::GradeTooHighException::what() const throw() {
	return ("Error: Grade is too high");
}

const char*	Form::GradeTooLowException::what() const throw() {
	return ("Error: Grade is too low");
}

Form::Form( void ) : _name(""), _grade(0), _gradeExecute(0), _signed(false) {
	std::cout << "Form: Default constructor called" << std::endl;
}

Form::Form( const Form& obj )
: _name(obj._name), _grade(obj._grade), _gradeExecute(obj._gradeExecute), _signed(obj._signed) {
	std::cout << "Form: Default constructor called" << std::endl;
}

Form::Form( std::string name, const int grade, const int gradeExecute )
: _name(name), _grade(grade), _gradeExecute(gradeExecute), _signed(false)
{
	std::cout << "Form: Default constructor called" << std::endl;
	if (_grade < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	if (_grade > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form( void ) {
	std::cout << "Form: Destructor called" << std::endl;
}

const std::string	Form::getName( void ) const {
	return (this->_name);
}

int	Form::getGrade( void ) const {
	return (this->_grade);
}

int	Form::getGradeExecute( void ) const {
	return (this->_gradeExecute);
}

bool	Form::getSigned( void ) const {
	return (this->_signed);
}

void	Form::beSigned( Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGrade())
		throw GradeTooLowException();
	this->_signed = true;
}

std::ostream&	operator<<(std::ostream& old, const Form& obj)
{
	old << "Name:         " << obj.getName() << std::endl;
	old << "Grade:        " << obj.getGrade() << std::endl;
	old << "GradeExecute: " << obj.getGradeExecute() << std::endl;
	old << "Signed:       " << obj.getSigned() << std::endl;

	return (old);
}

Form&	Form::operator=( const Form& obj)
{
	(std::string)this->_name = obj.getName();
	(int&)this->_grade = obj.getGrade();
	(int&)this->_gradeExecute = obj.getGradeExecute();
	this->_signed = obj.getSigned();
	return (*this);
}
