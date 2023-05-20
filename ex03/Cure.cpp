/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:24:22 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 16:26:23 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {}
Cure::Cure(const Cure& obj) {}
Cure::~Cure() {}
Cure& Cure::operator=(const Cure& obj) {}

AMateria* Cure::clone() const {
	return (new Cure);
}