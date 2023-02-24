/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:52:23 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/24 12:36:32 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <Animal.hpp>
#include <Brain.hpp>

class Dog : public Animal
{
	public:
		Dog( void );
		Dog( const Dog& obj );
		~Dog( void );

		void		makeSound( void ) const;
		std::string	getType( void ) const ;

		Dog&	operator=(const Dog& obj);

		private:
		Brain*	_brain;
};
