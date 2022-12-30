/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:59:21 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/29 21:23:55 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

# include <Animal.hpp>
# include <Brain.hpp>

class Dog : public Animal
{
	public:
		Dog( void );
		~Dog();

		void	makeSound( void ) const;

	private:
		Brain*	brain;
};

#endif
