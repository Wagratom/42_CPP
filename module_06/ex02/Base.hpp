/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:12:19 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/28 23:40:15 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdlib.h>

class Base
{
	public:
		virtual	~Base( void ) {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);
