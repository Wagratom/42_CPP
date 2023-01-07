/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:36:18 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/06 23:18:04 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

const char* Form::GradeTooLowException::what() const throw(){
	return ("excuse me. Your grade is too low to be part of our team");
}

Form::Form( std::string const name, int gradeSing, int grade_Execute) : _name(name), _signed(false), _gradeSing(gradeSing), _gradeExecute( grade_Execute ){
	std::cout << "Default constructor called Form " << name << std::endl;
}

Form::~Form() {
	std::cout << "Destructor called" << std::endl;
}

Form::Form( Form const	&src ) : _name(src._name), _gradeExecute(src._gradeExecute), _gradeSing(src._gradeSing), _signed(src._signed) {
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
}

std::string		Form::getName( void ) const{
	return (this->_name);
}

bool	Form::getSigned( void ) const {
	return (this->_signed);
}

int	Form::getGradeSing( void ) const{
	return (this->_gradeSing);
}

int	Form::getGradeExecute( void ) const{
	return (this->_gradeExecute);
}

bool	Form::verify_grade(int note_required, int nota)
{
	try {
		if (nota > note_required)
			throw Form::GradeTooLowException();
		std::cout << "Congratulations, you managed to sign with our team for " << getName() << std::endl;
		return (true);
	}
	catch (std::exception &obj) {
		std::cout << obj.what() << " for " << getName() << std::endl;
	}
	return (false);
}

void	Form::beSigned( Bureaucrat& src){
	this->_signed = verify_grade(this->_gradeSing, src.getGrade());
}

/*###################			Operators				   ###################*/

Form			&Form::operator=( Form const& src)
{
	(std::string)this->_name =src._name;
	this->_signed = src.getSigned();
	(int&)this->_gradeExecute = src.getGradeExecute();
	(int&)this->_gradeSing = src.getGradeSing();
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, Form&	src) {
	std::cout << "name: " << src.getName() << std::endl;
	std::cout << "Sing: " << src.getSigned() << std::endl;
	std::cout << "GradeSing: " << src.getGradeSing() << std::endl;
	std::cout << "radeExecute: " << src.getGradeExecute() << std::endl;
	return (out);
}
