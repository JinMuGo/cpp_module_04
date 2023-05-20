/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:26:44 by jgo               #+#    #+#             */
/*   Updated: 2023/05/19 15:09:11 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal Base Class") {
	std::cout << ANI_DFLT_CTOR << std::endl;
}
Animal::Animal(const Animal& obj) {
	std::cout << ANI_CPY_CTOR << std::endl;
	*this = obj;
}
Animal::~Animal() {
	std::cout << ANI_DTOR << std::endl;
}
Animal& Animal::operator=(const Animal& obj) {
	std::cout << ANI_CPY_ASGMT_OP_CALL << std::endl;
	if (this != &obj) {
		this->type = obj.type;
	}
	return (*this);
}

void Animal::makeSound(void) const {
	std::cout << ANI_MK_SOUND << std::endl;
}

std::string Animal::getType(void) const {
	return (this->type);
}