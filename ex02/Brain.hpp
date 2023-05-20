/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 10:57:47 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 15:38:38 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Brain.h"

class Brain {
   private:
	std::string ideas[DFLT_SIZE];

   public:
	Brain();
	Brain(const Brain& obj);
	~Brain();
	Brain& operator=(const Brain& obj);
	const std::string* getIdeas(void) const;
	void setIdeas(std::string idea, int idx);
	void setAllIdeas(std::string idea);
};

#endif
