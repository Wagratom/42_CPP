/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 10:58:04 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/22 16:07:11 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <iostream>
# include <fstream>
# include <string>

int		open_infile(std::ifstream &file);
int		open_outfile(std::ofstream &file);

#endif
