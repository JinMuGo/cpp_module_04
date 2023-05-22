/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:52:55 by jgo               #+#    #+#             */
/*   Updated: 2023/05/22 15:01:35 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Dog.h"

class Dog : public Animal {
   private:
	Brain* head;

   public:
	Dog();
	Dog(const Dog& obj);
	Dog& operator=(const Dog& obj);
	Brain* getHead(void) const;
	virtual ~Dog();
	virtual void makeSound(void) const;
};

#endif
