/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_name.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:29:38 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/10 18:16:42 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void	get_firt_name(Contact new_cttd)
{
	std::string input;

	std::cout << "Last name: ";
	std::cin >> input;
	new_cttd.firt_name = input;
}

void	get_last_name(Contact new_cttd)
{
	std::string input;

	std::cout << "Last name: ";
	std::cin >> input;
	new_cttd.last_name = input;
}

void	get_nickname(Contact new_cttd)
{
	std::string input;

	std::cout << "Nickname: ";
	std::cin >> input;
	new_cttd.nickname = input;
}

int	get_number(Contact new_cttd)
{
	std::string input;

	std::cout << "Phone number: ";
	std::cin >> input;
	for (int letter = 0; input[letter]; letter++)
	{
		if (input[letter] < '0' || input[letter] > '9')
		{
			std::cout << "please write a valid number" << std::endl;
			return (0);
		}
	}
	new_cttd.phone_namer = input;
	return (1);
}

void	darkest_secret(Contact new_cttd)
{
	std::string input;

	std::cout << "Darkest secret: ";
	std::cin >> input;
	new_cttd.darkest_secret = input;
}

void	PhoneBook::add_contacts(void)
{
	get_firt_name(book[0]);
	get_last_name(book[0]);
	get_nickname(book[0]);
	get_number(book[0]);
	darkest_secret(book[0]);
	std::cout << "contact added" << std::endl;
	std::cout << "input one command \"ADD\" \"SEARCH\" or \"EXIT\" !" << std::endl;
}

