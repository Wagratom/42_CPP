/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:38:23 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/12 15:30:24 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	write_word_upper(char	*word)
{
	for (int letter = 0; word[letter]; letter++)
		std::cout << (char)std::toupper(word[letter]);
	std::cout << " ";
}

int main(int argc, char	*argv[])
{
	argc = argc;
	for (int i = 1; argv[i]; i++)
		write_word_upper(argv[i]);
	std::cout << "\n";
	return (0);
}
