/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:45:54 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/15 12:16:19 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	write_str_upper(std::string str)
{
	int	len_str;

	len_str = str.size();
	for (int i = 0; i < len_str; i++)
	{
		std::cout << (char)toupper(str[i]);
	}
}

int	main(int argc, char *argv[])
{
	int	index;

	if (argc > 1)
	{
		index = 0;
		while (argv[++index])
			write_str_upper(argv[index]);
		std::cout << std::endl;
		return (0);
	}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
