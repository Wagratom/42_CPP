/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:36:18 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/04 23:16:12 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

const char* AForm::GradeTooLowException::what() const throw(){
	return ("excuse me. Your grade is too low to be part of our team");
}

AForm::AForm( std::string const name, int gradeSing, int grade_Execute) : _name(name), _signed(false), _gradeSing(gradeSing), _gradeExecute( grade_Execute ){
	std::cout << "Default constructor called AForm " << name << std::endl;
}

AForm::~AForm() {
	std::cout << "Destructor called" << std::endl;
}

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

bool	AForm::verify_grade(int note_required, int nota)
{
	try {
		if (nota > note_required)
			throw AForm::GradeTooLowException();
		std::cout << "Congratulations, you managed to sign with our team for " << getName() << std::endl;
		return (true);
	}
	catch (std::exception &obj) {
		std::cout << obj.what() << " for " << getName() << std::endl;
	}
	return (false);
}

void	AForm::beSigned( Bureaucrat& src){
	this->_signed = verify_grade(this->_gradeSing, src.getGrade());
}

std::ostream&	operator<<(std::ostream& out, AForm&	src) {
	std::cout << "name: " << src.getName() << std::endl;
	std::cout << "Sing: " << src.getSigned() << std::endl;
	std::cout << "GradeSing: " << src.getGradeSing() << std::endl;
	std::cout << "radeExecute: " << src.getGradeExecute() << std::endl;
	return (out);
}

