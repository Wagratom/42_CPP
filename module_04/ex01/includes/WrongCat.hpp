/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:52:23 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/23 17:01:43 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( const WrongCat& obj );
		~WrongCat( void );

		void		makeSound( void ) const;
		std::string	getType( void ) const;

		WrongCat&	operator=(const WrongCat& obj);
};

