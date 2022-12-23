/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:18:55 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/22 23:25:59 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main(int argc, char *argv[])
{
	Harl	menssage;

	if (argc == 1)
		std::cout << "Error: no level passed" << std::endl;
	else if (argc == 2)
		menssage.complain(argv[1]);
	else
		std::cout << "Error: many level passed" << std::endl;
}
