/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:24:24 by jgo               #+#    #+#             */
/*   Updated: 2023/05/21 20:43:17 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "Cure.h"

class Cure : public AMateria {
   public:
	Cure();
	Cure(const Cure& obj);
	Cure& operator=(const Cure& obj);
	virtual ~Cure();
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
