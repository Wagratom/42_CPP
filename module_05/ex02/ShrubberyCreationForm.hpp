/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:39:27 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/04 12:18:41 by wwallas-         ###   ########.fr       */
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
		~ShrubberyCreationForm();

		void virtual	execute(Bureaucrat const & executor);
		bool			canExecute( Bureaucrat const& executor );

		std::string		getDestiny( void ) const;

	private:
		const std::string	_destiny;
};
