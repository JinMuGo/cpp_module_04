/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:19:30 by jgo               #+#    #+#             */
/*   Updated: 2023/05/21 20:43:22 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "Ice.h"

class Ice : public AMateria {
   private:
   public:
	Ice();
	Ice(const Ice& obj);
	Ice& operator=(const Ice& obj);
	virtual ~Ice();
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif