/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:36:18 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/02 15:37:27 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

Form::Form( std::string const name, int gradeSing, int grade_Execute) : _name(name), _signed(false), _gradeSing(gradeSing), _gradeExecute( grade_Execute ){
	std::cout << "Default constructor called Form" << std::endl;
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

int		verify_grade()
void	Form::beSigned( Bureaucrat src){
	verify_grade(src.getGrade(), this->_gradeSing);
	if (src.getGrade() <= this->_gradeSing)
		this->_signed = true;
}
