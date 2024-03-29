/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:37:38 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/27 16:42:27 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <AForm.hpp>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm& obj );
		~ShrubberyCreationForm( void );

		void	execute(Bureaucrat const& executor) const;
		void	create_file( void ) const ;

		ShrubberyCreationForm&	operator=( const ShrubberyCreationForm& old);

	private:
		std::string _target;
};

#define LUFFY	" ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⡴⠚⢉⡃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣉⠛⠻⢶⢦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠖⢫⢗⣴⡿⣻⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠑⢰⣜⣎⣎⠷⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n""⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⢁⣴⢣⣫⠌⣽⢃⣀⡤⠤⠀⠀⠀⠀⠀⠀⠀⠤⠤⠤⢤⣀⣠⡟⣟⣘⠘⡆⠑⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠂⠀⡴⠃⣰⡿⣴⡧⠷⠚⠉⠁⣀⣠⠤⢤⣒⣒⣂⣀⣠⣠⣄⣠⣤⣶⣿⡟⠙⠻⢼⣾⡞⡆⠈⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n""⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡜⢁⣾⠟⠋⠙⣿⣶⣶⣶⣷⣶⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣦⣤⣌⣙⠿⣕⡀⠿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣎⠴⠋⠀⣠⠔⣢⣼⣿⣿⣿⣿⣿⡿⠉⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠛⢫⡙⠈⠳⣄⢻⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡄⠀⠀⣠⠞⠁⢀⡤⣚⣵⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣄⠈⠲⣄⠈⣳⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣶⣴⣉⣀⣴⣫⣾⣿⣿⣿⣿⣿⡟⣿⣿⠋⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⡈⢧⡈⢙⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⢸⣿⠇⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⠙⣄⠹⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠋⠀⡙⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⣸⣟⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⠀⠀⠘⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⡟⢿⡜⣎⢦⠙⣷⡀⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⠀⡼⠃⢠⣯⣾⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⣻⡧⣀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⢀⣤⠶⢻⣿⣿⡷⢿⣿⣿⣿⣿⣿⣿⣴⡿⡜⣾⡇⠈⣷⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⣼⠁⢠⣿⣿⠟⠋⣽⣿⣿⣿⣿⣿⣧⠶⠚⢻⡏⠛⠲⢦⣀⠀⠀⣠⠀⠀⠀⢿⣿⠋⠀⠀⠸⣿⣿⠀⢸⣿⣿⣿⣿⣿⣿⣿⡅⠙⠀⠘⣄⠙⣧⠀⠀⠀⠀⠀⠀\n""⠀⠀⠀⠀⠀⠀⢸⠃⠀⣼⡟⠁⠀⣠⣿⣿⣿⣿⣿⣿⠁⠀⠀⠈⢇⠀⠀⠉⠈⠑⠀⠙⢦⠀⠀⢸⡏⠀⢀⣠⣶⣿⠇⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣄⠀⠀⢸⠀⠸⡇⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⢸⠀⠀⡇⠁⠄⣰⣿⣿⣿⣿⣿⣿⣇⠀⠀⠠⣄⣿⣶⣦⣄⡄⠀⠀⢄⣿⠆⠀⠘⠃⣰⣿⣷⡿⠿⠶⣦⡀⣿⣿⢻⣿⣿⣿⣿⡝⠻⣦⣠⠀⠇⠀⢳⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⢸⠇⠀⢁⣴⡾⠿⢻⣿⣿⣿⣿⣿⣿⠀⣠⣾⠟⠉⠠⠶⠛⠇⠀⠀⣿⠁⠀⠀⠀⠈⠛⣙⣉⣉⣀⣠⡴⠛⣿⡏⣿⣿⣿⣿⣿⡇⠀⠀⠙⠈⢡⠀⣼⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⡖⣾⠄⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣟⢿⡇⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠉⠣⠘⠂⠀⣀⣐⣀⣈⣁⡤⠤⠷⠶⣟⠀⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠱⠀⣧⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠁⢯⡆⠐⡄⠀⠀⠀⣾⣿⡇⣿⣿⣿⣆⢹⣷⠞⠚⠋⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠁⠀⠀⢀⠀⠀⢀⠀⢸⢀⣿⣿⣿⣿⠹⣇⠀⠀⠀⠀⡇⠀⣸⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⢸⡃⠀⢳⢰⡀⣄⠈⣿⡀⣼⣛⢻⡏⣿⠃⠀⡆⠀⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡇⠀⣸⡤⢸⢸⡿⣿⢻⣿⡄⠉⠀⠀⠀⢸⠀⢠⡏⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⢧⠀⠈⣧⢷⡙⣮⢯⡧⣇⣯⣷⢹⣸⡆⠦⢽⣄⣘⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠤⠤⠒⠚⡟⠋⠹⢀⡟⡾⣾⣿⢸⠈⢻⣦⣄⣠⢄⡟⣀⡞⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⠈⢣⣤⠘⢿⡻⠈⠉⠁⠹⣜⢯⡓⢧⢳⡀⢸⡁⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⢀⡼⣽⢗⣫⢏⡞⠀⠛⠿⡿⢃⡞⠀⡞⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠳⣅⠀⠝⣆⠺⣔⢴⣬⣳⢭⣩⣦⢳⣄⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡞⣱⢗⣋⡽⢋⡀⠀⠀⡀⣠⠊⣰⡜⠀⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠢⣄⠈⢳⣌⡛⠋⠉⠁⠀⠈⠳⢼⡷⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⡾⢋⣴⡿⠉⠱⣶⠿⢟⡵⣺⠞⢁⣴⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠓⠤⣀⢀⠀⢦⡿⣔⠯⣷⠆⢻⣶⣬⣳⠲⠤⣄⣀⣀⣀⣤⠤⠤⢖⡻⣟⣭⣴⣿⠏⢳⣺⠴⢀⡀⢉⡜⡁⣠⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⢥⣀⠉⠻⣋⠀⠀⠈⠓⢻⢎⠙⠒⠯⣄⡀⢀⣐⡶⠾⠛⠋⡽⣸⠃⠉⠀⠀⠀⢚⡩⠞⢡⣾⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡬⠵⣶⡤⣄⡐⠦⠄⢸⢸⠀⠀⠀⠀⠉⠉⠀⠀⠀⠀⣸⠁⡏⠄⣀⣀⣤⠮⣭⣤⠚⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡾⢃⣴⣿⣿⣿⣿⣿⣷⣦⡟⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡏⠀⣷⣛⣉⣬⣤⣤⡈⠹⢳⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠚⠉⠛⠒⢲⡏⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⡞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⠀⢻⣿⣿⣿⣿⣿⣿⣧⠈⠙⠦⣄⡤⠴⠦⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⠀⢀⡞⢉⣴⣾⣿⣿⣷⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⣰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡀⠸⣿⣿⣿⣿⣿⣿⣿⣷⣄⣤⣤⣤⣴⣶⣭⡙⢦⡀⠀⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⢠⠏⣠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⡴⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢳⡀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡄⠱⡄⠀⠀⠀⠀⠀\n" "⠀⠀⠀⠀⠀⡟⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡫⠞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢤⡙⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⣿⡀⠀⠀⠀⠀\n" "⠀⠀⢀⡴⠞⣡⣬⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠻⠥⠯⢤⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣤⠤⠽⠦⠭⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡞⢿⣦⡀⠀⠀\n" "⠀⣰⠏⣡⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠉⠙⠲⢤⠀⠀⠀⠀⠤⠒⠋⠉⠁⠀⠀⠀⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣜⠛⣆⠀\n" "⠼⠁⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⠘⢆\n"
