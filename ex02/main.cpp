/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:05:35 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 15:32:50 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

static inline void doDefaultTest(void) {
	/* DEFAULT TEST*/

	std::cout << "\n\nDEFAULT TEST\n" << std::endl;

	const Animal* j;
	const Animal* i;

	try {
		j = new Dog();
		i = new Cat();
	} catch (std::bad_alloc& e) {
		std::cerr << e.what() << std::endl;
		std::exit(1);
	}
	delete j;  //should not create a leak
	delete i;
}

static inline void doDeepCopyTest(void) {
	/* DEEP COPY TEST*/
	std::cout << "\n\nDEEP COPY TEST\n" << std::endl;
	const Cat* RightCat = new Cat();

	for (int i = 0; i < 4; ++i)
		std::cout << RightCat->getHead()->getIdeas()[i] << std::endl;

	RightCat->getHead()->setAllIdeas("A good idea just crossed my mind.");

	for (int i = 0; i < 4; ++i)
		std::cout << RightCat->getHead()->getIdeas()[i] << std::endl;

	std::cout << "\n\nCopyCat copy the RightCat\n\n" << std::endl;

	Cat CopyCat(*RightCat);

	RightCat->getHead()->setIdeas("hi i'm invasion good to see you", 1);

	std::cout << "RightCat think Idea\n" << std::endl;

	for (int i = 0; i < 4; ++i)
		std::cout << RightCat->getHead()->getIdeas()[i] << std::endl;

	std::cout << "CopyCat think Idea\n" << std::endl;

	for (int i = 0; i < 4; ++i)
		std::cout << CopyCat.getHead()->getIdeas()[i] << std::endl;

	/*
	const WrongCat* WrongCat_ = new WrongCat();

	for (int i = 0; i < 4; ++i)
		std::cout << WrongCat_->getHead()->getIdeas()[i] << std::endl;

	WrongCat_->getHead()->setAllIdeas("A Wrong idea just crossed my mind.");

	for (int i = 0; i < 4; ++i)
		std::cout << WrongCat_->getHead()->getIdeas()[i] << std::endl;

	std::cout << "\n\nCopyCat copy the WrongCat\n\n" << std::endl;

	WrongCat CopyCat2 = *WrongCat_;

	WrongCat_->getHead()->setIdeas("hi i'm invasion, mmmm....", 2);

	std::cout << "WrongCat Think Idea" << std::endl;

	for (int i = 0; i < 4; ++i)
		std::cout << WrongCat_->getHead()->getIdeas()[i] << std::endl;

	std::cout << "CopyCat2 Think Idea" << std::endl;

	for (int i = 0; i < 4; ++i)
		std::cout << CopyCat2.getHead()->getIdeas()[i] << std::endl;

	//delete WrongCat_; to test shallow copy quote this
	*/
	delete RightCat;
}

static inline void doArrayTest(void) {
	/* ARRAY TEST*/
	std::cout << "\n\nARRAY TEST\n" << std::endl;

	Animal* animalArr[DFLT_SIZE];

	for (int i = 0; i < DFLT_SIZE; ++i) {
		try {
			if (i % 2)
				animalArr[i] = new Dog();
			else
				animalArr[i] = new Cat();
		} catch (std::bad_alloc& e) {
			std::cerr << e.what() << std::endl;
			std::exit(1);
		}
	};

	for (int i = 0; i < DFLT_SIZE; ++i)
		animalArr[i]->makeSound();
	for (int i = 0; i < DFLT_SIZE; ++i)
		delete animalArr[i];
}

int main(void) {
	doDefaultTest();
	doDeepCopyTest();
	doArrayTest();

	//Animal AbstractClass(); // yeah this is the AbstractClass
	//system("leaks do_not_want_to_set_the_world_on_fire");
	return 0;
}