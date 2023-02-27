/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:40:45 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 11:47:06 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("Robotomy", 72, 45){
	std::cout << "Robotomy: Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("Robotomy", 72, 45){
	std::cout << "Robotomy: Default constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << "Robotomy: Destructor called" << std::endl;
}
