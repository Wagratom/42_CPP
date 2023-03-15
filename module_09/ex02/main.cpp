/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:24:25 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/14 15:36:11 by wwallas-         ###   ########.fr       */
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

double	get_time_order(PmergeMe& obj)
{
	struct timeval	start, end;

	gettimeofday(&start, NULL);
	obj.merge_sort();
	gettimeofday(&end, NULL);
	return ((end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec));
}

void	print_my_time(double time, int size)
{
	std::cout << "Time to process a range of " << size << " elements with std::vector : ";
	std::cout << std::fixed <<  std::setprecision(5) << time << " us" << std::endl;
}

void	print_vector_time(const PmergeMe& obj)
{
	struct				timeval	start, end;
	std::vector<int>	tmp(obj.get_vector());
	double				time;

	gettimeofday(&start, NULL);
	std::sort(tmp.begin(), tmp.end());
	gettimeofday(&end, NULL);

	time = (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec);
	std::cout << "Time to process a range of " << tmp.size() << " elements with std::vector : ";
	std::cout << std::fixed <<  std::setprecision(5) << time << " us" << std::endl;
}

void	sort_array(char *argv[])
{
	double	time;

	try {
		PmergeMe	PmergeMe(&argv[1]);
		std::cout << "Before: " << PmergeMe << std::endl;
		time = get_time_order(PmergeMe);
		std::cout << "After:  " << PmergeMe << std::endl;
		print_my_time(time, PmergeMe.size());
		print_vector_time(PmergeMe);

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
