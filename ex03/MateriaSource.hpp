/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:35:40 by jgo               #+#    #+#             */
/*   Updated: 2023/05/21 20:43:34 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "MateriaSource.h"

class MateriaSource : public IMateriaSource {
   private:
	AMateria* slot_[SLOT_SIZE];

   public:
	MateriaSource();
	MateriaSource(const MateriaSource& obj);
	MateriaSource& operator=(const MateriaSource& obj);
	
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria* ma);
	virtual AMateria* createMateria(std::string const& type);
};

#endif
