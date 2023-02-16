/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:26:31 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/15 23:05:05 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <PhoneBook.hpp>

PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
}

int	PhoneBook::get_input( void )
{
	std::string input;

	std::cout << "How can I help you?" << std::endl;
	std::cin >>	input;
	if (input == "ADD")
		_input = 1;
	else if (input == "SEARCH")
		_input = 2;
	else if (input == "EXIT")
		_input = 0;
	else
		_input = -1;
	return (_input);
}

int	PhoneBook::get_valid_input( void )
{
	while(get_input() == -1)
		std::cout << "Please pass a valid input (ADD, INSERT, EXIT)" << std::endl;
	return (_input);
}

std::string	PhoneBook::get_data(const char *msg)
{
	std::string	input;

	std::cout << msg;
	std::cin >> input;
	return (input);
}

void	PhoneBook::add_contact( void )
{
	if (_index >= 7)
		_index = 0;
	_contacts[_index].set_firstName(get_data("First Name: "));
	_contacts[_index].set_lastName(get_data("Last Name: "));
	_contacts[_index].set_nickname(get_data("Nickname: "));
	_contacts[_index].set_phoneNumber(get_data("Phone Number: "));
	_contacts[_index].set_darkSecret(get_data("Darkest Secret: "));
	_index += 1;
}

void	PhoneBook::search_contacts( void )
{
	int	index = -1;

	std::cout << "|  Index   |First Name|Last Name | Nickname |" << std::endl;
	while (++index < 3)
	{
		std::cout << _contacts[index].get_firstName() << std::endl;
		std::cout << _contacts[index].get_lastName() << std::endl;
		std::cout << std::endl;
	}
}


void	PhoneBook::handle_input( void )
{
	if (_input == 1)
		add_contact();
	else if (_input == 2)
		search_contacts();
}
