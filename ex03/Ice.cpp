/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:19:27 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 16:33:28 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria() {
	std::cout << ICE_DFLT_CTOR << std::endl;
	this->type_ = "ice";
}
Ice::Ice(const Ice& obj) {
	std::cout << ICE_CPY_CTOR << std::endl;
	*this = obj;
}
Ice::~Ice() {
	std::cout << ICE_DTOR << std::endl;
}
Ice& Ice::operator=(const Ice& obj) {
	std::cout << ICE_CPY_ASGMT_OP_CALL << std::endl;

	if (this != &obj) {
		this->type_ = obj.type_;
	}

	return (*this);
}

AMateria* Ice::clone() const {
	return (new Ice());
}

void Ice::use(ICharacter& target) {
	std::cout << this->type_ << "* shoots an ice bolt at " << target.getName()
			  << " *" << std::endl;
}