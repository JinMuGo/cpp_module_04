/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:24:23 by jgo               #+#    #+#             */
/*   Updated: 2023/05/21 20:43:16 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"
#include "Character.hpp"

#define CURE_DFLT_CTOR GREEN "- Cure: Default constructor called" RESET
#define CURE_CTR LIGHT_CYAN "- Cure: constructor called" RESET
#define CURE_CPY_CTOR CYAN "- Cure: Copy constructor called" RESET
#define CURE_CPY_ASGMT_OP_CALL \
	DARK_CYAN "- Cure: Copy assignment operator called" RESET
#define CURE_DTOR RED "- Cure: Destructor called" RESET
#define CURE_MEMBER_FUNC_CALL "- Cure: member function called"

#endif