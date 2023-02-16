/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:16:32 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/15 17:48:09 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

int main ( void )
{
	PhoneBook	contacts;

	while (contacts.get_valid_input())
	{
		contacts.handle_input();
	}
	std::cout << "Good bye" << std::endl;
	return (0);
}
