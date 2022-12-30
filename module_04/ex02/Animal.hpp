/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:45:01 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/30 12:24:39 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
	public:
		Animal( void );
		~Animal( void );

		std::string		getType( void ) const;
		virtual void	makeSound( void ) const = 0;

	protected:
		std::string type;
};

#endif
