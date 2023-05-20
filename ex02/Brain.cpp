/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 10:57:46 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 14:45:31 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << BRAIN_DFLT_CTOR << std::endl;
	for (int i = 0; i < DFLT_SIZE; ++i) {
		this->ideas[i] = "something good idea....";
	}
}
Brain::Brain(const Brain& obj) {
	std::cout << BRAIN_CPY_CTOR << std::endl;
	*this = obj;
}
Brain::~Brain() {
	std::cout << BRAIN_DTOR << std::endl;
}
Brain& Brain::operator=(const Brain& obj) {
	std::cout << BRAIN_CPY_ASGMT_OP_CALL << std::endl;

	if (this != &obj) {
		for (int i = 0; i < DFLT_SIZE; ++i)
			this->ideas[i] = obj.ideas[i];
	}

	return (*this);
}

const std::string* Brain::getIdeas(void) const {
	return (this->ideas);
}

void Brain::setIdeas(std::string idea, int idx) {
	if (0 <= idx && idx <= DFLT_SIZE)
		this->ideas[idx] = idea;
	else
		std::cout << "Wrong index you have to set the idx 0 <= index <="
				  << DFLT_SIZE << std::endl;
}

void Brain::setAllIdeas(std::string idea) {
	for (int i = 0; i < DFLT_SIZE; ++i)
		this->setIdeas(idea, i);
}