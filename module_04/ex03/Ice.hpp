/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 10:47:06 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/01 13:03:43 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define	ICE_H

#include <AMateria.hpp>

class Ice : public AMateria
{
	private:
		/* data */
	public:
		Ice( void );
		~Ice();

		AMateria*	clone() const;
		void		use(ICharacter& target);

};

#endif
