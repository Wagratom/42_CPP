/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:45:54 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/15 12:22:10 by wwalas-          ###   ########.fr       */
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

int	print_argv_upper(char *argv[])
{
	int	index;

	index = 0;
	while (argv[++index])
		write_str_upper(argv[index]);
	std::cout << std::endl;
	return (0);
}

int	print_not_parameter( void )
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
		return (print_argv_upper(argv));
	return (print_not_parameter());
}
