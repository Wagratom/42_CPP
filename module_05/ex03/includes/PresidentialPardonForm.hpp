/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:41:28 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 16:42:21 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <AForm.hpp>

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( const PresidentialPardonForm& obj );
		PresidentialPardonForm( std::string target );
		~PresidentialPardonForm( void );

		void	execute(Bureaucrat const& executor) const;
		PresidentialPardonForm&	operator=( const PresidentialPardonForm& old);

	private:
		std::string _target;
};
