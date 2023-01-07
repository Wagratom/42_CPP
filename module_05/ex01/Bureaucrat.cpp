/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:26:11 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/07 12:19:09 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Bureaucrat.hpp>

/*###################			Ults					   ###################*/

std::string	Bureaucrat::GradeTooHighException::highException(std::string msg){
	return ( std::string("Exception 1: ") + msg);
}

std::string	Bureaucrat::GradeTooLowException::lowException( std::string msg ) {
	return ( std::string("Exception 2: ") + msg);
}

bool	Bureaucrat::is_valid_grade( int *grade, std::string msg )
{
	try {
		if (*grade < 1 || *grade > 150)
			throw std::invalid_argument(Bureaucrat::GradeTooHighException().highException(msg));
		return (true);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		std::cin >> *grade;
	}
	return (false);
}

/*###################		Constructors				   ###################*/

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {
	std::cout << "Default constructor called " << name << std::endl;
	while (!is_valid_grade( &grade, "invalid created note value. Pass a value between 1 and 150"));
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Destructor called " << this->_name << std::endl;
}

/*###################			Getts					   ###################*/

std::string	Bureaucrat::getName( void ) const {
	return (this->_name);
}

int	Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

/*###################			Init					   ###################*/

int	Bureaucrat::is_valid_UpDown(int *grade)
{
	if (!is_valid_grade( grade, "You are trying to go to a grid that does not supported. Action canceled, send anything to continue"))
		return (0);
	std::cout << "successfully Upgrade" << std::endl;
	return (1);
}

void	Bureaucrat::upgrade( void )
{
	int grade = this->_grade - 1;
	if (!is_valid_UpDown( &grade))
		return ;
	this->_grade = grade;
	std::cout << "successfully Upgrade" << std::endl;
}

void	Bureaucrat::downgrade( void ){
	int grade = this->_grade + 1;
	if (!is_valid_UpDown( &grade))
		return ;
	this->_grade = grade;
	std::cout << "successfully downgrade" << std::endl;
}

void	Bureaucrat::signForm( Form &form){
	if (form.getSigned() == true)
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	else
	{
		std::cout << this->_name << " couldn’t sign " << form.getName();
		std::cout << " because" << " very low grade" << std::endl;
	}
}

/*###################			Operators				   ###################*/

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& src) {
	(std::string)this->_name =	src.getName();
	this->_grade = src.getGrade();
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, Bureaucrat src) {
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (out);
}
