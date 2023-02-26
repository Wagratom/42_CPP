/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:18:30 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/26 17:26:32 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <Form.hpp>

class Form;

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
		Bureaucrat( std::string name, int grade );
		~Bureaucrat( void );

		void	increment( void );
		void	decrement( void );

		const std::string	getName( void ) const;
		int					getGrade( void ) const;

		void		signForm( const Form& form );

		Bureaucrat&	operator=( const Bureaucrat& old);
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream&	operator<<(std::ostream& old, const Bureaucrat& obj);
