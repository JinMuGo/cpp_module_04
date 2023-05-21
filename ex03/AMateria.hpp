/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:12:52 by jgo               #+#    #+#             */
/*   Updated: 2023/05/21 20:43:03 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "AMateria.h"

class ICharacter;

class AMateria {
   protected:
	std::string type_;

   public:
	AMateria();
	AMateria(std::string const& type);
	AMateria(const AMateria& obj);
	AMateria& operator=(const AMateria& obj);

	virtual ~AMateria();
	std::string const& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif