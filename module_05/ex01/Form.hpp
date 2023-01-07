/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:36:18 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/06 18:55:43 by wwalas-          ###   ########.fr       */
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
		Form( Form const	&src );
		~Form();

		std::string		getName( void ) const;
		bool			getSigned( void ) const;
		int				getGradeSing( void ) const;
		int				getGradeExecute( void ) const;

		void			beSigned( Bureaucrat& src);
		Form			&operator=( Form const& src);

		bool			verify_grade(int note_required, int nota);

	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSing;
		const int			_gradeExecute;

};

std::ostream&	operator<<(std::ostream& out, Form& src);
