/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_name.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:29:38 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/13 11:53:18 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void	increment_numbers(int	*index, int *number_ctt);
int		is_valid_number(std::string number);
int		valid_chars(std::string number);
int		valid_size(std::string number);

void	get_first_name(Contact book[8], int index)
{
	std::string input;

	std::cout << "First name: ";
	std::cin >> input;
	book[index].set_first_name(input);
}

void	get_last_name(Contact book[8], int index)
{
	std::string input;

	std::cout << "Last name: ";
	std::cin >> input;
	book[index].set_last_name(input);
}

void	get_nickname(Contact book[8], int index)
{
	std::string input;

	std::cout << "Nickname: ";
	std::cin >> input;
	book[index].set_nickname(input);
}

void	darkest_secret(Contact book[8], int index)
{
	std::string input;

	std::cout << "Darkest secret: ";
	std::cin >> input;
	book[index].set_darkest_secret(input);
}

int	get_number(Contact book[8], int index)
{
	std::string input;

	std::cout << "Phone number: ";
	std::cin >> input;
	if (!is_valid_number(input))
		return (0);
	book[index].set_phone_name(input);
	return (1);
}

int	is_valid_number(std::string number)
{
	if (!valid_chars(number))
		return (0);
	if (!valid_size(number))
		return (0);
	return (1);
}

int	valid_chars(std::string number)
{
	int letter;

	letter = -1;
	while (number[++letter])
	{
		if (number[letter] >= '0' && number[letter] <= '9')
			continue ;
		std::cout << "\nPlease write a valid number" << std::endl;
		return (0);
	}
	return (1);
}

int	valid_size(std::string number)
{
	int size;

	size = -1;
	while (number[++size]);
	if (size == 8)
		return (1);
	std::cout << "\nInvalid size number. Example 92604085" << std::endl;
	return (0);
}

void	PhoneBook::AddContacts(void)
{
	static int index = 0;

	get_first_name(book, index);
	get_last_name(book, index);
	get_nickname(book, index);
	while (!get_number(book, index));
	darkest_secret(book, index);
	increment_numbers(&index, &number_ctd);
	std::cout << "contact added\n" << std::endl;
	std::cout << "input one command \"ADD\" \"SEARCH\" or \"EXIT\" !" << std::endl;
}

void	increment_numbers(int	*index, int *number_ctd)
{
	*index += 1;
	if (*index >= 8)
		*index = 0;
	if (*number_ctd + 1 < 8)
		*number_ctd += 1;
}
