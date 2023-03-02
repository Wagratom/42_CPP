/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identifyREF.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:05:13 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/28 23:51:23 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<Base.hpp>

void	identify(Base& p)
{
	try {
		dynamic_cast<A&>(p);
		std::cout << "Class ref is A" << std::endl;
	} catch(const std::exception& e)
	{
		try {
			dynamic_cast<B&>(p);
			std::cout << "Class ref is B" << std::endl;
		} catch(const std::exception& e)
		{
			try {
				dynamic_cast<C&>(p);
				std::cout << "Class ref is C" << std::endl;
			} catch(const std::exception& e) {
				std::cout << e.what() << std::endl;
			}
		}
	}
}