/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 10:58:04 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/22 16:05:52 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.hpp>

void	write_to_outfile(std::ofstream &outfile, std::string line, char *argv[])
{
	int	position_s1;

	position_s1 = line.find(argv[0]);
	while (position_s1 != -1)
	{
		line.erase(position_s1, std::string(argv[0]).length());
		line.insert(position_s1, argv[1]);
		position_s1 = line.find(argv[0]);
		outfile << line << std::endl;
	}
}

int	read_and_write_outfile(std::ifstream &infale, char *argv[])
{
	std::string		line;
	std::string		filename = std::string(argv[0]) + ".replace";
	std::ofstream	outfile(filename.c_str());

	if (!open_outfile(outfile))
		return (1);
	while (!infale.eof())
	{
		std::getline(infale, line);
		write_to_outfile(outfile, line, &argv[1]);
	}
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		std::ifstream input(argv[1]);
		if (!open_infile(input))
			return (1);
		return (read_and_write_outfile(input, &argv[1]));
	}
	std::cout << "Error: invalid number of arguments" << std::endl;
	return (0);
}
