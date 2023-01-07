/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:26:11 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/06 18:57:17 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <stdexcept>
# include <iostream>
# include <AForm.hpp>

class AForm;

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

		Bureaucrat&	operator=(Bureaucrat const& src);
		void		signForm( AForm &form);

		int			get_valid_grade( int *grade, std::string msg);
		int			verify_up_or_down(int *grade);

		void		executeForm(AForm const & form) const;
		bool		canExecute(AForm const& form) const;

	private:
		const std::string 	_name;
		int					_grade;
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat src);

#endif
