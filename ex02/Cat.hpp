/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:52:55 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 14:04:06 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Cat.h"

class Cat : public Animal {
   private:
	Brain* head;

   public:
	Cat();
	Cat(const Cat& obj);
	Cat& operator=(const Cat& obj);
	virtual ~Cat();
	virtual void makeSound(void) const;
	Brain* getHead(void) const;
};

#endif
