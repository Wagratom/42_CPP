/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:26:11 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/02 20:32:20 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const&	src );
		~Bureaucrat();

		std::string	getName( void );
		int			getGrade( void );

		void		upgrade( void );
		void		downgrade( void );

		Bureaucrat&	operator=(Bureaucrat const src);
		std::string	GradeTooHighException(std::string msg);
		std::string	GradeTooLowException(std::string msg);

		int			get_valid_grade( int *grade, std::string msg);
		int			verify_up_or_down(int *grade);


	private:
		const std::string 	_name;
		int					_grade;
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat src);

#endif
