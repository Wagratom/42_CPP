/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:28:59 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/25 17:03:39 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>

Character::Character( void ) :  _name(""), _index(0)
{
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
}

Character::Character( std::string name ) : _name(name), _index(0)
{
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
}

Character::Character( const Character& obj )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (obj.inventory[i])
			this->inventory[i] = obj.inventory[i];
	}
	*this = obj;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

std::string const&	Character::getName( void ) const {
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (this->_index <= 3)
	{
		this->inventory[_index] = m;
		this->_index += 1;
	}
	else
		std::cout << "O inventory is full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		delete this->inventory[idx];
		this->inventory[idx] = NULL;
		std::cout << "Successfully unequipped" << std::endl;
	}
	else
		std::cout << "Invalid index uneqquipped" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 && idx > 3)
		std::cout << "Invalid index uneqquipped" << std::endl;
	else if (this->inventory[idx] == NULL)
		std::cout << "Invalid Slot uneqquipped: slot is null" << std::endl;
	else
		this->inventory[idx]->use(target);
}
