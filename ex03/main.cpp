/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:34:59 by jgo               #+#    #+#             */
/*   Updated: 2023/05/21 20:47:34 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

static inline void default_test(void) {
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
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

static inline void my_test(void) {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());

	Character* me;
	ICharacter* me2;
	Character bob("bob");

	me = new Character("me");
	me2 = new Character(*me);

	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me2->equip(tmp);

	me->unequip(1);
	me2->unequip(1);

	AMateria* tmp2 = src->createMateria("ice");

	bob.equip(tmp2);

	me->use(0, bob);
	me2->use(0, bob);

	bob.use(0, *me);

	delete me2;
	delete me;
	delete src;
}

int main() {

	std::cout << "\n\nDo the default_test\n\n" << std::endl;
	default_test();
	std::cout << "\n\nDo the my_test\n\n" << std::endl;
	my_test();
	// system("leaks Interface_recap");
	return 0;
}