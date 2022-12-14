/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:36:18 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/07 00:25:37 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

const char* AForm::GradeTooLowException::what() const throw(){
	return ("excuse me. Your grade is too low to be part of our team");
}

/*###################		Constructors				   ###################*/

AForm::AForm( std::string const name, int gradeSing, int grade_Execute) : _name(name), _signed(false), _gradeSing(gradeSing), _gradeExecute( grade_Execute ) {
	std::cout << "Default constructor called AForm " << std::endl;
}

AForm::AForm( AForm const &src) : _name(src._name), _signed(src._signed), _gradeSing(src._gradeSing), _gradeExecute( src._gradeExecute ) {
	std::cout << "AForm copy constructor called " << std::endl;
	*this = src;
}

AForm::~AForm() {
	std::cout << "Destructor called" << std::endl;
}

/*###################			Getts					   ###################*/

std::string		AForm::getName( void ) const{
	return (this->_name);
}

bool	AForm::getSigned( void ) const{
	return (this->_signed);
}

int	AForm::getGradeSing( void ) const{
	return (this->_gradeSing);
}

int	AForm::getGradeExecute( void ) const{
	return (this->_gradeExecute);
}

/*###################			Init					   ###################*/

void	AForm::signGrade(int note_required, int nota)
{
	if (nota > note_required)
		throw AForm::GradeTooLowException();
	this->_signed = true;
	std::cout << "Congratulations, you managed to sign with our team for " << getName() << std::endl;
}

void	AForm::beSigned( Bureaucrat& src)
{
	try {
		signGrade(getGradeSing(), src.getGrade());
	}
	catch(std::exception &obj){
		std::cout << obj.what() << " for " << getName() << std::endl;
	}
}

/*###################			Operators				   ###################*/

AForm	&AForm::operator=( AForm const &src)
{
	(std::string)this->_name =src._name;
	(int&)this->_gradeExecute = src.getGradeExecute();
	(int&)this->_gradeSing = src.getGradeSing();
	this->_signed = src.getSigned();
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, AForm&	src) {
	std::cout << "name: " << src.getName() << std::endl;
	std::cout << "Sing: " << src.getSigned() << std::endl;
	std::cout << "GradeSing: " << src.getGradeSing() << std::endl;
	std::cout << "radeExecute: " << src.getGradeExecute() << std::endl;
	return (out);
}
