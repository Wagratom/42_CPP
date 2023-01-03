/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:26:11 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/02 20:36:47 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Bureaucrat.hpp>
# include <stdexcept>

/******************************************************************************/
std::string	Bureaucrat::GradeTooHighException(std::string msg) {
	return (std::string ("Execção 1 ") + msg);
}

std::string	Bureaucrat::GradeTooLowException(std::string msg) {
	throw std::invalid_argument(std::string ("Execção 2 ") + msg);
}

int	Bureaucrat::get_valid_grade( int *grade, std::string msg )
{
	try {
		if (*grade < 1 )
			throw std::invalid_argument(GradeTooHighException(msg));
		else if (*grade > 150)
			throw std::invalid_argument(GradeTooHighException(msg));
		return (*grade);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		std::cin >> *grade;
	}
	return (0);
}
/******************************************************************************/

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {
	std::cout << "Default constructor called " << name << std::endl;
	while (!get_valid_grade( &grade, "invalid created note value. Pass a value between 1 and 150"));
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Destructor called " << this->_name << std::endl;
}
/******************************************************************************/

std::string	Bureaucrat::getName( void ) {
	return (this->_name);
}

int	Bureaucrat::getGrade( void ) {
	return (this->_grade);
}
/******************************************************************************/

int	Bureaucrat::verify_up_or_down(int *grade)
{
	if (!get_valid_grade( grade, "You are trying to go to a grid that does not supported. Action canceled, press any key to continue"))
		return (0);
	std::cout << "successfully Upgrade" << std::endl;
	return (1);
}

void	Bureaucrat::upgrade( void )
{
	int grade = this->_grade - 1;
	if (!verify_up_or_down( &grade))
		return ;
	this->_grade = grade;
	std::cout << "successfully Upgrade" << std::endl;
}

void	Bureaucrat::downgrade( void ){
	int grade = this->_grade + 1;
	if (!verify_up_or_down( &grade))
		return ;
	this->_grade = grade;
	std::cout << "successfully downgrade" << std::endl;
}
/******************************************************************************/

Bureaucrat&	Bureaucrat::operator=(Bureaucrat src) {
	this->_grade = src.getGrade();
	(std::string)this->_name = src.getName();

	return (*this);
}

std::ostream&	operator<<(std::ostream& out, Bureaucrat src) {
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (out);
}
