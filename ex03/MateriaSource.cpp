/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:36:12 by jgo               #+#    #+#             */
/*   Updated: 2023/05/21 20:43:30 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << MAT_SRC_DFLT_CTOR << std::endl;
	for (int i = 0; i < SLOT_SIZE; ++i)
		this->slot_[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource& obj) {
	std::cout << MAT_SRC_CPY_CTOR << std::endl;

	*this = obj;
}
MateriaSource::~MateriaSource() {
	std::cout << MAT_SRC_DTOR << std::endl;
	for (int i = 0; i < SLOT_SIZE; ++i)
		if (this->slot_[i])
			delete this->slot_[i];
}
MateriaSource& MateriaSource::operator=(const MateriaSource& obj) {
	std::cout << MAT_SRC_CPY_ASGMT_OP_CALL << std::endl;
	if (this == &obj)
		return (*this);
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

void MateriaSource::learnMateria(AMateria* ma) {
	if (ma == NULL)
		return;
	for (int i = 0; i < SLOT_SIZE; ++i)
		if (this->slot_[i] == NULL) {
			this->slot_[i] = ma;
			std::cout << "MateriaSource: learn the Materia " << ma->getType()
					  << " in " << i << std::endl;
			return;
		}
	std::cout << "MateriaSource: can't learn because slot is full" << std::endl;
	delete ma;
}
AMateria* MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < SLOT_SIZE; ++i) {
		if (this->slot_[i] && this->slot_[i]->getType() == type) {
			std::cout << "MateriaSource: create the Materia " << type
					  << std::endl;
			return (this->slot_[i]->clone());
		}
	}
	std::cout << "MateriaSource: can't found " << type << std::endl;
	return (NULL);
}