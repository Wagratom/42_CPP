/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ultsConversions.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:32:03 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/06 11:54:18 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <conversions.hpp>

/*################		Check if the numbers are valid		  ################*/

static std::string	getFinalNumber(std::string nbr)
{
	int initial;

	initial = nbr.find('.');
	if (initial > 0)
		return (nbr.substr(initial, nbr.length()));
	return ("");
}

static std::string	getInitialNumber(std::string nbr)
{
	int initial;

	initial = nbr.find('.');
	if (initial > 0)
		return (nbr.substr(0, initial));
	return (nbr);
}

static void	valid_number(int index, std::string nbr)
{
	if (nbr[index] == '.' && nbr[index + 1] == '\0')
		throw	std::invalid_argument("impossible");
	while (nbr[++index])
	{
		if (nbr[index] >= '0' && nbr[index] <= '9')
			continue;
		if (nbr[index] == 'f' && nbr[index + 1] == '\0')
			continue;
		throw	std::invalid_argument("impossible");
	}
}

void	is_valid_number( std::string nbr )
{
	valid_number(-1, getInitialNumber(nbr));
	valid_number(0, getFinalNumber(nbr));
}

/*################			 	Ults Int					  ################*/
int	conver_to_int(std::string nbr)
{
	int					result;
	std::string			strResult;
	std::stringstream	aux;

	result = atoi(nbr.c_str());
	aux << result;
	strResult = aux.str();
	if (strResult != getInitialNumber(nbr))
		throw std::invalid_argument("impossible");
	return (result);
}

/*################				Ults Float and Double		/*################*/

bool	remote_end_char( std::string &nbr, char c)
{
	int	end = nbr.length() - 1;

	if (nbr[end] != c)
		return (false);
	nbr.erase(end);
	return (true);
}

void	print_zero(int nbr_zero)
{
	std::cout << ".0";
	while (nbr_zero != 0 && --nbr_zero)
		std::cout << "0";
}

void	print_correct_zero(std::string nbr)
{
	int	nbr_zero = 0;

	remote_end_char(nbr, 'f');
	while (remote_end_char(nbr, '0'))
		nbr_zero++;
	print_zero(nbr_zero);
}

