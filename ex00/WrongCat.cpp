/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:44:19 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 10:46:23 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << W_CAT_DFLT_CTOR << std::endl;
	this->type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal() {
	std::cout << W_CAT_CPY_CTOR << std::endl;
	*this = obj;
}
WrongCat::~WrongCat() {
	std::cout << W_CAT_DTOR << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& obj) {
	std::cout << W_CAT_CPY_ASGMT_OP_CALL << std::endl;
	if (this != &obj) {
		this->type = obj.type;
	}
	return (*this);
}

void WrongCat::makeSound(void) const {
	std::cout << W_CAT_MK_SOUND << std::endl;
}