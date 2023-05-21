/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:24:22 by jgo               #+#    #+#             */
/*   Updated: 2023/05/21 20:43:15 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria() {
	std::cout << CURE_DFLT_CTOR << std::endl;
	this->type_ = "cure";
}
Cure::Cure(const Cure& obj) {
	std::cout << CURE_CPY_CTOR << std::endl;
	*this = obj;
}
Cure::~Cure() {
	std::cout << CURE_DTOR << std::endl;
}
Cure& Cure::operator=(const Cure& obj) {
	std::cout << CURE_CPY_ASGMT_OP_CALL << std::endl;

	if (this != &obj) {
		this->type_ = obj.getType();
	}
	return (*this);
}

AMateria* Cure::clone() const {
	return (new Cure);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}