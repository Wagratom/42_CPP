/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:52:23 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/24 12:36:28 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <Animal.hpp>
#include <Brain.hpp>

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( const Cat& obj );
		~Cat( void );

		void		makeSound( void ) const;
		std::string	getType( void ) const;

		Cat&	operator=(const Cat& obj);

	private:
		Brain*	_brain;
};

