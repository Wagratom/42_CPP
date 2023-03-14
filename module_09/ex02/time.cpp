/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:06:51 by wwallas-          #+#    #+#             */
/*   Updated: 2023/03/14 14:57:27 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

int	*time_init(void)
{
	static int	_time;

	return (&_time);
}

void	set_time_init(int time)
{
	*time_init() = time;
}

int	get_time_init(void)
{
	return (*(time_init()));
}

int	time_start(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return (time.tv_sec * 1000000 + time.tv_usec);
}

int	get_time(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
    return time.tv_sec * 1000000 + time.tv_usec - get_time_init();
}
