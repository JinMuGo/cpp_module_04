/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:12:52 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 16:27:00 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "AMateria.h"

class AMateria {
   protected:
	std::string type_;

   public:
	AMateria();
	AMateria(std::string const& type);
	AMateria(const AMateria& obj);
	~AMateria();
	AMateria& operator=(const AMateria& obj);

	std::string const& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif