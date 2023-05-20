/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:37:08 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 17:09:48 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	std::cout << CHAR_DFLT_CTOR << std::endl;
}
Character::Character(std::string name):name_(name) {
	for (int i = 0; i < SLOT_SIZE; ++i)
		this->slot_[i] = NULL;
}
Character::Character(const Character& obj) {}
Character::~Character() {}
Character& Character::operator=(const Character& obj) {}

std::string const& Character::getName() const {}
void Character::equip(AMateria* m) {}
void Character::unequip(int idx) {}
void Character::use(int idx, ICharacter& target) {}