/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:29:38 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/12 14:54:01 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void	PhoneBook::EXIT(void)
{
	//exit(0);
}

PhoneBook::PhoneBook(void)
{
	number_ctd = 0;
}

PhoneBook::~PhoneBook()
{
}

int	main()
{
	PhoneBook	book;
	std::string buff;

	std::cout << "input one command \"ADD\" \"SEARCH\" or \"EXIT\" !" << std::endl;
	while (1)
	{
		std::cin >> buff;
		if (buff == "ADD")
			book.AddContacts();
		else if (buff == "SEARCH")
			book.Search();
		else if (buff == "EXIT")
			break ;
		else
			std::cout << "command invalid input one of the three commands \"ADD\" \"SEARCH\" or \"EXIT\" !" << std::endl;
	}
	return (0);
}
