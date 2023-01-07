/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:36:18 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/06 22:25:43 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <Bureaucrat.hpp>
#include <fstream>
#include <stdlib.h>

class Bureaucrat;

class AForm
{
	public:
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
		AForm(  std::string const name, int gradeSing, int grade_Execute );
		AForm(  AForm const &src );
		~AForm();

		std::string		getName( void ) const;
		bool			getSigned( void ) const;
		int				getGradeSing( void ) const;
		int				getGradeExecute( void ) const;

		void			beSigned( Bureaucrat& src);
		void			signGrade(int note_required, int nota);

		void virtual	execute(Bureaucrat const & executor) = 0;

	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSing;
		const int			_gradeExecute;

};

std::ostream&	operator<<(std::ostream& out, AForm& src);
