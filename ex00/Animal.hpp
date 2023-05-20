/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:26:46 by jgo               #+#    #+#             */
/*   Updated: 2023/05/19 15:08:57 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Animal.h"

class Animal {
   protected:
	std::string type;

   public:
	Animal();
	Animal(const Animal& inst);
	Animal& operator=(const Animal& inst);
	std::string getType(void) const;
	virtual ~Animal();
	virtual void makeSound(void) const;
};

#endif