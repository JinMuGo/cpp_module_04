/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:44:19 by jgo               #+#    #+#             */
/*   Updated: 2023/05/22 15:04:42 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << CAT_DFLT_CTOR << std::endl;
	this->type = "Cat";
	this->head = new Brain();
}
Cat::Cat(const Cat& obj) : Animal() {
	std::cout << CAT_CPY_CTOR << std::endl;
	*this = obj;
}
Cat::~Cat() {
	std::cout << CAT_DTOR << std::endl;
	delete this->head;
}
Cat& Cat::operator=(const Cat& obj) {
	std::cout << CAT_CPY_ASGMT_OP_CALL << std::endl;
	if (this != &obj) {
		this->type = obj.type;
		if (this->head)
			delete this->head;
		try {
			this->head = new Brain(*(obj.getHead()));
		} catch (std::bad_alloc& e) {
			std::cerr << e.what() << std::endl;
			exit(1);
		}
	}
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << CAT_MK_SOUND << std::endl;
}

Brain* Cat::getHead(void) const {
	return (this->head);
}