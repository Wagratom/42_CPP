/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:32:03 by wwallas-          #+#    #+#             */
/*   Updated: 2023/01/09 12:07:09 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stdint.h>

typedef struct s_data
{
	int		value;
	char*	name;
} Data;

class Serialization
{
	public:
		Serialization( void );
		Serialization( Serialization const& src );
		~Serialization( void );

		uintptr_t	serialize(Data* ptr);
		Data*		deserialize(uintptr_t raw);


	private:
};
