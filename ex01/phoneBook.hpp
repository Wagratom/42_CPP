/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 09:37:34 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/10 18:04:21 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact
{
	public:

	private:
		std::string firt_name;
		std::string last_name;
		std::string nickname;
		std::string phone_namer;
		std::string darkest_secret;

};

class PhoneBook
{
	public:
		void	add_contacts(void);
		void	search(void);
		void	exit(void);

	private:
		Contact book[8];
};


