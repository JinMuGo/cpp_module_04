/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:19:29 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 17:07:38 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"
#include "const.h"

#define ICE_DFLT_CTOR GREEN "- Ice: Default constructor called" RESET
#define ICE_CTR LIGHT_CYAN "- Ice: constructor called" RESET
#define ICE_CPY_CTOR CYAN "- Ice: Copy constructor called" RESET
#define ICE_CPY_ASGMT_OP_CALL \
	DARK_CYAN "- Ice: Copy assignment operator called" RESET
#define ICE_DTOR RED "- Ice: Destructor called" RESET
#define ICE_MEMBER_FUNC_CALL "- Ice: member function called"

#endif
