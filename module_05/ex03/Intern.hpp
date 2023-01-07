/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:49:37 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/07 12:02:19 by wwalas-          ###   ########.fr       */
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

		Intern( void );
		Intern( Intern const &src );
		~Intern( void );

		t_dictionary*	dictionary( void ) const;

		AForm*	Robotomy( std::string destiny );
		AForm*	Shrubbery( std::string destiny );
		AForm*	Presidential( std::string destiny);

		AForm*	makeForm( std::string name, std::string target );
		AForm*	getCorrectForm( std::string name, std::string target );
		void	tryExecute( AForm*& aux, std::string target);

		Intern&	operator=( Intern const &src );

	private:
		t_dictionary*	_dictionary;
};
