/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:32:03 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/06 11:29:51 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>
# include <sstream>

class conversions
{
	public:
		conversions( void );
		conversions( conversions const& src );
		~conversions( void );

		void	conversionsInt( std::string nbr );
		void	conversionsChar( std::string nbr );
		void	conversionsFloat( std::string nbr );
		void	conversionsDouble( std::string nbr );

	private:
};

void		is_valid_number( std::string nbr );
int			conver_to_int(std::string nbr);
void		print_correct_zero(std::string nbr);
