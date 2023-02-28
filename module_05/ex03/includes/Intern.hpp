/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:16:15 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 19:25:53 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>

class Intern;

typedef struct s_dictionary
{
	std::string name;
	AForm*(Intern::*func)(std::string);

} t_dictionary;

class Intern
{
	public:
		class exceptionForm : public std::exception {
			public:
				char const* what() const throw();
		};
		Intern( void );
		~Intern( void );

		t_dictionary*	create_dictionary();
		AForm*			create_PresidentialPardon( std::string target );
		AForm*			create_RobotomyRequest( std::string target );
		AForm*			create_ShrubberyCreation( std::string target );

		AForm*	makeForm( std::string name, std::string target);

};

