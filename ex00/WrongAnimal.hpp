/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:26:46 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 10:44:48 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include "WrongAnimal.h"

class WrongAnimal {
   protected:
	std::string type;

   public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& inst);
	WrongAnimal& operator=(const WrongAnimal& inst);
	std::string getType(void) const;
	virtual ~WrongAnimal();

	void makeSound(void) const; // this make different
};

#endif