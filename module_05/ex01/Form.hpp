/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:36:18 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/03 12:24:20 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <Bureaucrat.hpp>
class Bureaucrat;

class Form
{
	public:
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
		Form(  std::string const name, int gradeSing, int grade_Execute );
		~Form();

		std::string		getName( void );
		bool			getSigned( void );
		int				getGradeSing( void );
		int				getGradeExecute( void );

		void			beSigned( Bureaucrat& src);

		bool			verify_grade(int note_required, int nota);

	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSing;
		const int			_gradeExecute;

};

std::ostream&	operator<<(std::ostream& out, Form& src);
