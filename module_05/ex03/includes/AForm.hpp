/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:16:17 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 15:53:24 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <Bureaucrat.hpp>

class Bureaucrat;

class AForm
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

		AForm( void );
		AForm( const AForm& obj );
		AForm( std::string name, const int grade, const int gradeExecute );
		virtual ~AForm( void ) = 0;

		const std::string	getName( void ) const ;
		int					getGrade( void ) const ;
		int					getGradeExecute( void ) const ;
		bool				getSigned( void ) const ;

		void	setName( std::string name );
		void	setGrade( int grade );
		void	setGradeExecute( int gradeExecute );
		void	setSigned( bool signedd );

		void				beSigned( Bureaucrat& bureaucrat);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		AForm&	operator=( const AForm& obj);

	private:
		const std::string	_name;
		const int			_grade;
		const int			_gradeExecute;
		bool				_signed;
};

std::ostream&	operator<<(std::ostream& old, const AForm& obj);