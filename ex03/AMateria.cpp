/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:13:03 by jgo               #+#    #+#             */
/*   Updated: 2023/05/21 20:42:55 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria() {
	std::cout << AMAT_DFLT_CTOR << std::endl;
}

AMateria::AMateria(const AMateria& obj) {
	std::cout << AMAT_CPY_CTOR << std::endl;

	*this = obj;
}

AMateria::AMateria(std::string const& type) {
	std::cout << AMAT_CTR << std::endl;

	this->type_ = type;
}

AMateria::~AMateria() {
	std::cout << AMAT_DTOR << std::endl;
}

AMateria& AMateria::operator=(const AMateria& obj) {
	std::cout << AMAT_CPY_ASGMT_OP_CALL << std::endl;

	if (this != &obj) {
		this->type_ = obj.getType();
	}
	return (*this);
}

std::string const& AMateria::getType() const {
	return (this->type_);
}

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria: i'm just Materias then.... i'll show you the target"
			  << target.getName() << std::endl;
}