/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:38:23 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/09 09:32:58 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	write_word(char	*word)
{
	for (int letter = 0; word[letter]; letter++)
			std::cout << (char)std::toupper(word[letter]);
	std::cout << " ";
}

int main(int argc, char	*argv[])
{
	for (int i = 1; argv[i]; i++)
		write_word(argv[i]);
	std::cout << "\n";
	return (0);
}
