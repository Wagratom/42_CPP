/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:32:03 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/09 16:06:29 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>

class Base
{
	public:
		virtual	~Base ( void );

		Base*	instanceBase(int nbr);
		void	whichBase(Base *p);
		void	whichBase(Base &p);

		Base*	generate(void);
		void	identify(Base* p);

	private:
};

class A: public Base{};
class B: public Base{};
class C: public Base{};

