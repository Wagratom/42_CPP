/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:24:25 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/15 17:33:55 by wwallas-         ###   ########.fr       */
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

/******************************************************************************/
/*                           Get Times Vectors                                */
/******************************************************************************/
double	get_time_vector(PmergeMe& obj)
{
	struct timeval	start, end;

	gettimeofday(&start, NULL);
	obj.merge_sort_vector();
	gettimeofday(&end, NULL);
	return ((end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec));
}

double	get_time_deque(PmergeMe& obj)
{
	struct timeval	start, end;

	gettimeofday(&start, NULL);
	obj.merge_sort_deque();
	gettimeofday(&end, NULL);
	return ((end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec));
}

/******************************************************************************/
/*                           print Times Vectors                                */
/******************************************************************************/
void	print_time_vector(char *argv[])
{
	PmergeMe	obj(&argv[1]);
	double		time;

	std::cout << "Before: "; obj.print_vector();
	time = get_time_vector(obj);
	std::cout << "After:  "; obj.print_vector();
	std::cout << "Time to process a range of " << obj.size_vector() << " elements with std::vector : ";
	std::cout << std::fixed <<  std::setprecision(5) << time << " us" << std::endl;
}

void	print_time_deque(char *argv[])
{
	PmergeMe	obj(&argv[1]);
	double		time;

	std::cout << "Before: "; obj.print_deque();
	time = get_time_deque(obj);
	std::cout << "After:  "; obj.print_deque();
	std::cout << "Time to process a range of " << obj.size_deque() << " elements with std::deque : ";
	std::cout << std::fixed <<  std::setprecision(5) << time << " us" << std::endl;
}

void	sort_array(char *argv[])
{

	try {
		print_time_vector(argv);
		print_time_deque(argv);
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
