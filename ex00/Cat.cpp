/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:44:19 by jgo               #+#    #+#             */
/*   Updated: 2023/05/19 15:03:51 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << CAT_DFLT_CTOR << std::endl;
	this->type = "Cat";
}
Cat::Cat(const Cat& obj) : Animal() {
	std::cout << CAT_CPY_CTOR << std::endl;
	*this = obj;
}
Cat::~Cat() {
	std::cout << CAT_DTOR << std::endl;
}
Cat& Cat::operator=(const Cat& obj) {
	std::cout << CAT_CPY_ASGMT_OP_CALL << std::endl;
	if (this != &obj) {
		this->type = obj.type;
	}
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << CAT_MK_SOUND << std::endl;
}