/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:31:00 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/29 12:10:52 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <ClapTrap.hpp>

class FragTrap : public ClapTrap
{
	public:
		FragTrap( const std::string& target );
		~FragTrap( void );

		void highFivesGuys(void);

	private:
};


#endif
