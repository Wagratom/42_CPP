/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:39:27 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/07 12:17:47 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <AForm.hpp>

class ShrubberyCreationForm : public AForm
{
		/* data */
	public:
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

		ShrubberyCreationForm( std::string destiny );
		ShrubberyCreationForm( ShrubberyCreationForm const &src);
		~ShrubberyCreationForm();

		void virtual	execute(Bureaucrat const & executor);
		void			canExecute( Bureaucrat const& executor );

		std::string		getDestiny( void ) const;

		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const &src);
	private:
		const std::string	_destiny;
};
