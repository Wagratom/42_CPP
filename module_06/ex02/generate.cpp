/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:17:28 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/28 23:22:57 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>

Base*	generate(void)
{
	int	select;

	srand(time(NULL));
	select = rand() % 3;
	if (select == 1)
	{
		std::cout << "Create class A" << std::endl;
		return (new A);
	}
	else if (select == 2)
	{
		std::cout << "Create class B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "Create class C" << std::endl;
		return (new C);
	}
	return (NULL);
}
