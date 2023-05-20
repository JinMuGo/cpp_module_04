/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:52:55 by jgo               #+#    #+#             */
/*   Updated: 2023/05/19 15:12:52 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

#ifndef CAT_HPP
#define CAT_HPP

class Cat: public Animal {
   public:
	Cat();
	Cat(const Cat& obj);
	Cat& operator=(const Cat& obj);
	virtual ~Cat();
	virtual void makeSound(void) const;
};

#endif
