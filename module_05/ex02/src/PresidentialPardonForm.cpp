/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:41:04 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 11:47:17 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("Presidential", 25, 5) {
	std::cout << "Presidential: Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm("Presidential", 25, 5) {
	std::cout << "Presidential: Default constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << "Presidential: Destructor called" << std::endl;
}
