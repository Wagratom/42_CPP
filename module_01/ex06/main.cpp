/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:18:55 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/23 11:04:12 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main(int argc, char *argv[])
{
	Harl	menssage;

	if (argc == 1)
		std::cout << "Error: no level passed" << std::endl;
	else if (argc > 2)
		std::cout << "Error: many level passed" << std::endl;
	else if (std::string(argv[1]) == "I am not sure how tired I am today...")
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
		menssage.complain(argv[1]);
	return (0);
}
