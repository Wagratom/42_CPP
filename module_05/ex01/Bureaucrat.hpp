/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:26:11 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/07 00:13:35 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <stdexcept>
# include <iostream>
# include <Form.hpp>

class Form;

class Bureaucrat
{
	public:
		class GradeTooHighException {
			public:
				std::string	highException(std::string msg);
		};
		class GradeTooLowException {
			public:
				std::string	lowException( std::string msg );
		};

		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const&	src );
		~Bureaucrat();

		std::string	getName( void ) const;
		int			getGrade( void ) const;

		void		upgrade( void );
		void		downgrade( void );

		void		signForm( Form &form);

		bool		is_valid_grade( int *grade, std::string msg);
		int			is_valid_UpDown(int *grade);

		Bureaucrat&	operator=(Bureaucrat const& src);

	private:
		const std::string 	_name;
		int					_grade;
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat src);

#endif
