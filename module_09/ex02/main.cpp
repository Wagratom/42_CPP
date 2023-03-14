/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:24:25 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/14 15:12:31 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

void	check_arguments(int argc, char **argv)
{
	if (argc <= 2)
		exit(EXIT_SUCCESS);
	if (!argv || *argv[1] == 0)
		exit (EXIT_SUCCESS);
}

void	sort_array(char *argv[])
{
	try {
		PmergeMe	PmergeMe(&argv[1]);
		PmergeMe.merge_sort();
		std::cout << "After:  " << PmergeMe << std::endl;
	} catch (std::invalid_argument &e) {
		std::cerr << e.what() << std::endl;
	}
}

int	main(int argc, char **argv)
{
	check_arguments(argc, argv);
	sort_array(argv);

	return (0);
}
