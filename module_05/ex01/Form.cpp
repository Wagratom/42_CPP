/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:36:18 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/03 12:26:44 by wwallas-         ###   ########.fr       */
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

std::string		Form::getName( void ){
	return (this->_name);
}

bool	Form::getSigned( void ){
	return (this->_signed);
}

int	Form::getGradeSing( void ){
	return (this->_gradeSing);
}

int	Form::getGradeExecute( void ){
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

std::ostream&	operator<<(std::ostream& out, Form&	src) {
	std::cout << "name: " << src.getName() << std::endl;
	std::cout << "Sing: " << src.getSigned() << std::endl;
	std::cout << "GradeSing: " << src.getGradeSing() << std::endl;
	std::cout << "radeExecute: " << src.getGradeExecute() << std::endl;
	return (out);
}
