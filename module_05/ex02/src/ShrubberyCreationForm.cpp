/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:37:38 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 17:00:55 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("Shrubbery", 145, 137) {
	std::cout << "Shrubbery: Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
: AForm("Shrubbery", 145, 137), _target(target) {
	std::cout << "Shrubbery: Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& obj ) : AForm(obj) {
	std::cout << "Shrubbery: Copy constructor called" << std::endl;
	this->_target = obj._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << "Shrubbery: Destructor called" << std::endl;
}

void	ShrubberyCreationForm::create_file( void ) const
{
	std::string		fileName = this->_target + "_shrubbery";
	std::ofstream 	file(fileName.c_str());

	if (!file.is_open())
		std::cout << "Error in create file" << std::endl;
	file << LUFFY << std::endl;
	file.close();
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned() || executor.getGrade() > this->getGradeExecute())
		throw GradeTooHighException();
	create_file();
}


ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm &old)
{
	this->setName(old.getName());
	this->setGrade(old.getGrade());
	this->setGradeExecute(old.getGradeExecute());
	this->setSigned(old.getSigned());
	this->_target = old._target;
	return (*this);
}