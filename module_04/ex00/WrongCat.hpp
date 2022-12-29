/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 14:22:53 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/29 14:31:29 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		~WrongCat();

		void		makeSound( void ) const;

	private:
};

#endif

