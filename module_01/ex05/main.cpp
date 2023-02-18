/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:26:00 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/18 10:02:31 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main ( void )
{
	Harl	msg;

	msg.complain("DEBUG");
	// msg.complain("INFO");
	// msg.complain("ERROR");
	msg.complain("WARNING");
	return (0);
}
