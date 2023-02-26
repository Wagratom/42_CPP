/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:18:30 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/26 18:11:14 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("Error: Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("Error: Grade is too low");
}

Bureaucrat::Bureaucrat( void ) : _name(""), _grade(0) {
	std::cout << "Bureaucrat: Default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat( const Bureaucrat& old ) : _name(old._name), _grade(old._grade) {
	std::cout << "Bureaucrat: Copy constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	std::cout << "Bureaucrat: Default constructor called" << std::endl;
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat( void )	{
	std::cout << "Bureaucrat: Destructor called" << std::endl;
}

const std::string	Bureaucrat::getName( void ) const {
	return (this->_name);
}

int	Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

void	Bureaucrat::increment( void )
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void	Bureaucrat::decrement( void )
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooHighException();
	this->_grade  += 1;
}

std::ostream&	operator<<(std::ostream& old, const Bureaucrat& obj)
{
	old << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (old);
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& old)
{
	(std::string)this->_name = old.getName();
	this->_grade = old.getGrade();
	return (*this);
}
