/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identifyPTR.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:05:13 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/28 23:49:47 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<Base.hpp>

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Class is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class is B" << std::endl;
	else
		std::cout << "Class is c" << std::endl;
}