/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:26:44 by jgo               #+#    #+#             */
/*   Updated: 2023/05/19 15:09:11 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << W_ANI_DFLT_CTOR << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& obj) {
	std::cout << W_ANI_CPY_CTOR << std::endl;
	*this = obj;
}
WrongAnimal::~WrongAnimal() {
	std::cout << W_ANI_DTOR << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
	std::cout << W_ANI_CPY_ASGMT_OP_CALL << std::endl;
	if (this != &obj) {
		this->type = obj.type;
	}
	return (*this);
}

void WrongAnimal::makeSound(void) const {
	std::cout << YELLOW W_ANI_MK_SOUND RESET<< std::endl;
}

std::string WrongAnimal::getType(void) const {
	return (this->type);
}