/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:41:58 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 16:55:25 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <AForm.hpp>
#include <stdlib.h>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm& obj );
		~RobotomyRequestForm( void );

		void	execute(Bureaucrat const& executor) const;

		RobotomyRequestForm&	operator=( const RobotomyRequestForm& old);

	private:
		std::string _target;

};
