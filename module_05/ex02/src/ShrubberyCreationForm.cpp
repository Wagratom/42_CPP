/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:37:38 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 11:46:55 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("Shrubbery", 145, 137) {
	std::cout << "Shrubbery: Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("Shrubbery", 145, 137) {
	std::cout << "Shrubbery: Default constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << "Shrubbery: Destructor called" << std::endl;
}
