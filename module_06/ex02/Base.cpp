/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:32:03 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/09 16:06:56 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>

Base::~Base( void ) {
	std::cout << "Destructor called" << std::endl;
}

Base*	Base::instanceBase(int nbr)
{
	if (nbr == 0)
		return ( new A );
	if (nbr == 1)
		return ( new B );
	if (nbr == 2)
		return ( new C );
	return (NULL);
}

void	Base::whichBase(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "object type A" << std::endl;
	if (dynamic_cast<B*>(p) != NULL)
		std::cout << "object type B" << std::endl;
	if (dynamic_cast<C*>(p) != NULL)
		std::cout << "object type C" << std::endl;
}

void	Base::whichBase(Base &p)
{
	if (dynamic_cast<A&>(p) != NULL)
		std::cout << "object type A" << std::endl;
	if (dynamic_cast<B&>(p) != NULL)
		std::cout << "object type B" << std::endl;
	if (dynamic_cast<C&>(p) != NULL)
		std::cout << "object type C" << std::endl;
}

Base*	Base::generate(void)
{
	srand(time(NULL));
	return ( (instanceBase(random() % 3)) );
}

void	Base::identify(Base* p) {
	whichBase(p);
}

// void	Base::identify(Base& p) {
// 	whichBase(p);
// }
