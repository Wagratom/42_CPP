/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 10:47:06 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/01 13:08:14 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define	CURE_H

#include <AMateria.hpp>

class Cure : public AMateria
{
	private:
		/* data */
	public:
		Cure( void );
		~Cure();

		AMateria*	clone() const;
		void		use(ICharacter& target);

};

#endif
