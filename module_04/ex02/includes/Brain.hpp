/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:27:28 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/24 15:23:26 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	public:
		Brain( void );
		Brain( const Brain& obj );
		~Brain( void );

		std::string*	getBrain();

		Brain&	operator=(const Brain& obj);

	private:
		std::string	_ideas[100]; // troca na hora de enviar
};

