/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:21:50 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/28 23:50:12 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>

int	main( void )
{
	Base*	rrf;

	rrf = generate();
	identify(rrf);
	identify(*rrf);
	return (0);
}