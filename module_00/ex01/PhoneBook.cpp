/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:26:31 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/16 16:58:07 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <PhoneBook.hpp>

PhoneBook::PhoneBook( void )  : _input(0), _index(0), _size(0) {
}

PhoneBook::~PhoneBook( void ) {
}

int	PhoneBook::get_input( void )
{
	std::string input;

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
	std::cout << "How can I help you?" << std::endl;
	while(get_input() == -1)
		std::cout << "Please pass a valid input (ADD, SEARCH, EXIT)" << std::endl;
	return (_input);
}

std::string	PhoneBook::get_data( const char *msg )
{
	std::string	input;

	std::cin.clear();
	std::cin.ignore(10000, '\n');
	std::cout << msg;
	std::cin >> input;
	return (input);
}

void	PhoneBook::interactor_variables( void )
{
	_index += 1;
	if (_size < 8)
		_size += 1;
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
	interactor_variables();

}

void PhoneBook::print_str_Formated( std::string str )
{
	if (str.size() > 9)
		str = str.substr(0,9) + '.';
	std::cout << std::right << std::setw(10) << str << "|";
}

void	print_str(std::string prefix, std::string msg )
{
	std::cout << prefix << msg << std::endl;
}

void	PhoneBook::print_selected_ctd( std::string msg )
{
	int	input;

	std::cout << msg;
	std::cin >> input;
	if (input <= 0 || input > _size)
	{
		std::cout << "Invalid contact" << std::endl;
		std::cin.clear();
		return ;
	}
	std::cout << "\t contact " << input << std::endl;
	print_str("First Name: ", _contacts[input - 1].get_firstName());
	print_str("Last Name: ", _contacts[input - 1].get_lastName());
	print_str("Nickname: ", _contacts[input - 1].get_nickname());
	print_str("Phone Number: ", _contacts[input - 1].get_phoneNumber());
	print_str("Dark Secret: ", _contacts[input - 1].get_darkSecret());
	std::cout << std::endl;
}

void	PhoneBook::search_contacts( void )
{
	int	index = -1;

	std::cout << "\n|  Index   |First Name|Last Name | Nickname |" << std::endl;
	while (++index < _size)
	{
		std::cout << "|";
		std::cout << std::right << std::setw(10) << index + 1 << "|";
		print_str_Formated(_contacts[index].get_firstName());
		print_str_Formated(_contacts[index].get_lastName());
		print_str_Formated(_contacts[index].get_nickname());
		std::cout << std::endl;
	}
	print_selected_ctd("Select contact: ");
}


void	PhoneBook::handle_input( void )
{
	if (_input == 1)
		add_contact();
	else if (_input == 2)
		search_contacts();
}
