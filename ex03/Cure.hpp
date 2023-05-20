/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:24:24 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 16:25:55 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "Cure.h"

class Cure: public AMateria {
   private:
   public:
	Cure();
	Cure(const Cure& obj);
	~Cure();
	Cure& operator=(const Cure& obj);
	virtual AMateria* clone() const;
};

#endif

Cure::Cure() {}
Cure::Cure(const Cure& obj) {}
Cure::~Cure() {}
Cure& Cure::operator=(const Cure& obj) {}