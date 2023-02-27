/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:41:58 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 11:48:01 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <AForm.hpp>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		~RobotomyRequestForm( void );

	private:
		std::string _target;

};
