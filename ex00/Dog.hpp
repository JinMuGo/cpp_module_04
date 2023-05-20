/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:52:55 by jgo               #+#    #+#             */
/*   Updated: 2023/05/19 15:12:46 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

#ifndef DOG_HPP
#define DOG_HPP

class Dog: public Animal {
   public:
	Dog();
	Dog(const Dog& obj);
	Dog& operator=(const Dog& obj);
	virtual ~Dog();
	virtual void makeSound(void) const;
};

#endif
