/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 09:37:34 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/12 11:44:18 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact
{
	public:
		void		set_first_name(std::string first_name);
		void		set_last_name(std::string last_name);
		void		set_nickname(std::string nickname);
		void		set_phone_name(std::string phone_name);
		void		set_darkest_secret(std::string darkest_secret);

		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_nickname(void);
		std::string	get_phone_name(void);
		std::string	get_darkest_secret(void);

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_namer;
		std::string	darkest_secret;

};
