/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:49:37 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/04 23:01:11 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <AForm.hpp>
#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>

class Intern;

typedef AForm*(Intern::*function)( std::string destiny );

typedef struct s_dictionary
{
	std::string key;
	function	value;
}t_dictionary;

class Intern
{

	public:
		class	GradeTooLowException : public std::exception {
			public:
				const char*	what() const throw ();
		};

		Intern( );
		~Intern();

		t_dictionary*	dictionary( void );

		AForm*	Robotomy( std::string destiny );
		AForm*	Shrubbery( std::string destiny );
		AForm*	Presidential( std::string destiny);

		AForm*	makeForm( std::string name, std::string target );
		AForm*	get_function( std::string name, std::string target );
		bool	try_execute( AForm** aux, std::string target);
	private:
		t_dictionary*	_dictionary;
};
