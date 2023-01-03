/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:36:18 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/02 15:32:43 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <Bureaucrat.hpp>

class Form
{
	public:
		Form(  std::string const name, int gradeSing, int grade_Execute );
		~Form();

		void			GradeTooHighException( void );
		void			GradeTooLowException ( void );

		std::string		getName( void );
		bool			getSigned( void );
		int				getGradeSing( void );
		int				getGradeExecute( void );

		void			beSigned( Bureaucrat src);

	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSing;
		const int			_gradeExecute;
};
