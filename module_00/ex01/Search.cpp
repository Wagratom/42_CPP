/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:29:38 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/12 15:27:40 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"
#include <iomanip>

void	write_header()
{
	std::cout << "|  index   |";
	std::cout << "first name|";
	std::cout << " last name|";
	std::cout << " nickname |" << std::endl;
}

void	write_index(int index)
{
	std::cout << "|";
	std::cout.width(10);
	std::cout << index << "|";
}

void	write_name(std::string name)
{
	if (name.length() > 10)
	{
		std::cout.width(9);
		std::cout << name.substr(0, 9) << ".|";
	}
	else
	{
		std::cout.width(10);
		std::cout << name << "|";
	}
}

void	PhoneBook::Search(void)
{
	write_header();
	for (int index = 1; index <= number_ctd; index++)
	{
		write_index(index);
		write_name(book[index - 1].get_first_name());
		write_name(book[index - 1].get_last_name());
		write_name(book[index - 1].get_nickname());
		std::cout << std::endl;
	}
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "\ninput one command \"ADD\" \"SEARCH\" or \"EXIT\" !" << std::endl;
}
