/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:29:38 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/10 18:14:56 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void	PhoneBook::search(void)
{
	std::cout << "IMPUT NAME" << std::endl;
}

// void	PhoneBook::exit(void)
// {
// 	exit(0);
// }

int	main()
{
	PhoneBook	book;

	std::string buff;

	std::cout << "input one command \"ADD\" \"SEARCH\" or \"EXIT\" !" << std::endl;
	while (1)
	{
		std::cin >> buff;
		if (buff == "ADD")
			book.add_contacts();
		else if (buff == "search")
			std::cout << "escrevir search" << std::endl;
		else if (buff == "EXIT")
			break ;
		else
			std::cout << "command invalid input one of the three commands \"ADD\" \"SEARCH\" or \"EXIT\" !" << std::endl;

	}
	return (0);
}
