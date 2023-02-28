/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:40:50 by wwalas-           #+#    #+#             */
/*   Updated: 2023/02/28 09:57:52 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>
#include <Cure.hpp>
#include <MateriaSource.hpp>
#include <Character.hpp>

void	test_main( void )
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter*	me = new Character("me");
	AMateria*	tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

}

void	test_verys_learnMateria( void )
{
	IMateriaSource* src = new MateriaSource();
	Cure*	cure = new Cure;

	src->learnMateria( new Cure );
	src->learnMateria( new Cure );
	src->learnMateria( new Cure );
	src->learnMateria( new Cure );
	src->learnMateria( cure );

	delete cure;
	delete src;

}

void	not_learnMateria( void )
{
	IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());

	ICharacter*	me = new Character("me");

	src->createMateria("ice");
	src->createMateria("cure");

	delete me;
	delete src;

}

void	test_verys_equi()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter*	me = new Character("me");
	AMateria*	tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	delete me;
	delete tmp;
	delete src;
}

void	test_unequip()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());

	ICharacter*	me = new Character("me");
	AMateria*	tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->unequip(0);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);

	delete me;
	delete src;
	delete bob;
	// delete tmp;
}

int main( void )
{
	test_main();
	// test_verys_learnMateria();
	// not_learnMateria();
	// test_verys_equi();
	// test_unequip();
}