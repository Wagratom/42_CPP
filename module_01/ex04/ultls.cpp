/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ultls.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:33:35 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/17 23:36:32 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.hpp>

int	open_infile(std::ifstream &file)
{
	if (file.is_open())
		return (1);
	std::cout << "Error: not open file" << std::endl;
	return (0);
}

int	open_outfile(std::ofstream &file)
{
	if (file.is_open())
		return (1);
	std::cout << "Error: not open file" << std::endl;
	return (0);
}
