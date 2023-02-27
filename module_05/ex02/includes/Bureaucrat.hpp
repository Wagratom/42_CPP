/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:18:30 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 11:19:47 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <AForm.hpp>

class AForm;

class Bureaucrat
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

		Bureaucrat( void );
		Bureaucrat( const Bureaucrat& obj );
		Bureaucrat( std::string name, int grade );
		~Bureaucrat( void );

		void	increment( void );
		void	decrement( void );

		const std::string	getName( void ) const;
		int					getGrade( void ) const;

		void		signForm( const AForm& Aform );

		Bureaucrat&	operator=( const Bureaucrat& old);
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream&	operator<<(std::ostream& old, const Bureaucrat& obj);
