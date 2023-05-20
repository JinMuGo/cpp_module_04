/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:36:55 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 16:47:23 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Character.h"

class Character: public ICharacter {
   private:
	AMateria* slot_[SLOT_SIZE];
	std::string name_;

   public:
	Character();
	Character(std::string name);
	Character(const Character& obj);
	~Character();
	Character& operator=(const Character& obj);
	virtual std::string const& getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
