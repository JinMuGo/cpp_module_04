/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:05:35 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 11:50:06 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

static inline void prt() {
std::cout << " /$$$$$$$           /$$                                                       /$$       /$$                         \n";
std::cout << "| $$__  $$         | $$                                                      | $$      |__/                         \n";
std::cout << "| $$  \\ $$ /$$$$$$ | $$ /$$   /$$ /$$$$$$/$$$$   /$$$$$$   /$$$$$$   /$$$$$$ | $$$$$$$  /$$  /$$$$$$$ /$$$$$$/$$$$  \n";
std::cout << "| $$$$$$$//$$__  $$| $$| $$  | $$| $$_  $$_  $$ /$$__  $$ /$$__  $$ /$$__  $$| $$__  $$| $$ /$$_____/| $$_  $$_  $$ \n";
std::cout << "| $$____/| $$  \\ $$| $$| $$  | $$| $$ \\ $$ \\ $$| $$  \\ $$| $$  \\__/| $$  \\ $$| $$  \\ $$| $$|  $$$$$$ | $$ \\ $$ \\ $$ \n";
std::cout << "| $$     | $$  | $$| $$| $$  | $$| $$ | $$ | $$| $$  | $$| $$      | $$  | $$| $$  | $$| $$ \\____  $$| $$ | $$ | $$ \n";
std::cout << "| $$     |  $$$$$$/| $$|  $$$$$$$| $$ | $$ | $$|  $$$$$$/| $$      | $$$$$$$/| $$  | $$| $$ /$$$$$$$/| $$ | $$ | $$ \n";
std::cout << "|__/      \\______/ |__/ \\____  $$|__/ |__/ |__/ \\______/ |__/      | $$____/ |__/  |__/|__/|_______/ |__/ |__/ |__/ \n";
std::cout << "                        /$$  | $$                                  | $$                                             \n";
std::cout << "                       |  $$$$$$/                                  | $$                                             \n";
std::cout << "                        \\______/                                   |__/                                             \n";
std::cout << " \n";
}

int main(void) {
	prt();
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();	 //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << wrong_meta->getType() << " " << std::endl;
	std::cout << wrong_cat->getType() << " " << std::endl;

	wrong_meta->makeSound();
	wrong_cat->makeSound();	 // what's that sound?

	delete wrong_meta;
	delete wrong_cat;

	//system("leaks Polymorphism");

	return 0;
}