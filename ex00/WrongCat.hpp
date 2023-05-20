/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:52:55 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 10:49:37 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongCat.h"

class WrongCat : public WrongAnimal {
   public:
	WrongCat();
	WrongCat(const WrongCat& obj);
	WrongCat& operator=(const WrongCat& obj);
	virtual ~WrongCat();
	
	void makeSound(void) const;
};

#endif
