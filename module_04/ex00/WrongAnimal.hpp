/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 14:22:53 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/29 14:35:18 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <Animal.hpp>

class WrongAnimal
{
	public:
		WrongAnimal( void );
		~WrongAnimal();

		std::string	getType( void ) const;
		void		makeSound( void ) const;

	protected:
		std::string type;
};

#endif

