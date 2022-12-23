/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 10:45:31 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/22 23:48:47 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <main.hpp>

class Harl
{

	public:
		void	complain( std::string level );
		t_dic*	dictionary( void );

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		functions _function;
};

#endif
