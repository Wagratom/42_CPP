/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:39:27 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/07 00:22:09 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <AForm.hpp>

class RobotomyRequestForm : public AForm
{
		/* data */
	public:
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

		RobotomyRequestForm( std::string destiny );
		RobotomyRequestForm( RobotomyRequestForm const &src);
		~RobotomyRequestForm();

		void virtual		execute( Bureaucrat const & executor );
		void				canExecute( Bureaucrat const& executor );

		std::string			getDestiny( void ) const;

		RobotomyRequestForm &operator=(RobotomyRequestForm const &src);

	private:
		const std::string	_destiny;
};
