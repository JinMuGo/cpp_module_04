/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:37:08 by jgo               #+#    #+#             */
/*   Updated: 2023/05/21 20:43:06 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	std::cout << CHAR_DFLT_CTOR << std::endl;
}
Character::Character(std::string name) : name_(name) {
	std::cout << CHAR_CTOR << std::endl;
	for (int i = 0; i < SLOT_SIZE; ++i)
		this->slot_[i] = NULL;
}
Character::Character(const Character& obj) {
	std::cout << CHAR_CPY_CTOR << std::endl;
	*this = obj;
}
Character::~Character() {
	std::cout << CHAR_DTOR << std::endl;
	for (int i = 0; i < SLOT_SIZE; ++i)
		if (this->slot_[i])
			delete this->slot_[i];
}
Character& Character::operator=(const Character& obj) {
	std::cout << CHAR_CPY_ASGMT_OP_CALL << std::endl;

	if (this == &obj)
		return (*this);
	this->name_ = obj.getName();
	for (int i = 0; i < SLOT_SIZE; ++i) {
		if (this->slot_[i])
			delete this->slot_[i];
		if (obj.slot_[i])
			this->slot_[i] = obj.slot_[i]->clone();
		else
			this->slot_[i] = NULL;
	}
	return (*this);
}

std::string const& Character::getName() const {
	return (this->name_);
}
void Character::equip(AMateria* m) {
	if (m == NULL)
		return;
	for (int i = 0; i < SLOT_SIZE; ++i) {
		if (this->slot_[i] == NULL) {
			this->slot_[i] = m;
			std::cout << "Character: equip the AMateria " << m->getType()
					  << std::endl;
			return;
		}
	}
	std::cout << "Character: " << this->name_ << "'s slot is full" << std::endl;
}
void Character::unequip(int idx) {
	if (0 <= idx && idx < SLOT_SIZE && this->slot_[idx]) {
		std::cout << "Character: unequip the AMateria "
				  << this->slot_[idx]->getType() << std::endl;
		this->slot_[idx] = NULL;
		return;
	}
	std::cout << "Character: " << this->name_ << "'s " << idx
			  << " slot is empty or out of range" << std::endl;
}
void Character::use(int idx, ICharacter& target) {
	if (0 <= idx && idx < SLOT_SIZE && this->slot_[idx])
		this->slot_[idx]->use(target);
	else
		std::cout << "Character: " << this->name_ << "'s " << idx
				  << "slot is empty or out of range" << std::endl;
}