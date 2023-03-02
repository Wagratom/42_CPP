/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:16:17 by wwalas-           #+#    #+#             */
/*   Updated: 2023/03/02 11:26:22 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <Bureaucrat.hpp>

class Bureaucrat;

class Form
{
	public:
		class GradeTooHighException : public std::exception {
			public:
				const char*	what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char*	what(void) const throw();
		};

		Form( void );
		Form( const Form& obj );
		Form( std::string name, const int grade, const int gradeExecute );
		~Form( void );

		const std::string	getName( void ) const ;
		int					getGrade( void ) const ;
		int					getGradeExecute( void ) const ;
		bool				getSigned( void ) const ;

		void				beSigned( Bureaucrat& bureaucrat);

		Form&	operator=( const Form& obj);

	private:
		const std::string	_name;
		const int			_grade;
		const int			_gradeExecute;
		bool				_signed;
};

std::ostream&	operator<<(std::ostream& old, const Form& obj);