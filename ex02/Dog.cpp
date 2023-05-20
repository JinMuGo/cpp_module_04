/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:44:19 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 11:10:51 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << DOG_DFLT_CTOR << std::endl;
	this->type = "Dog";
	this->head = new Brain();
}
Dog::Dog(const Dog& obj) : Animal() {
	std::cout << DOG_CPY_CTOR << std::endl;
	*this = obj;
}
Dog::~Dog() {
	std::cout << DOG_DTOR << std::endl;
	delete this->head;
}
Dog& Dog::operator=(const Dog& obj) {
	std::cout << DOG_CPY_ASGMT_OP_CALL << std::endl;
	if (this != &obj) {
		this->type = obj.type;
	}
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << DOG_MK_SOUND << std::endl;
}