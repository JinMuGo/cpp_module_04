/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 10:57:47 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 15:00:56 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include "const.h"

#define BRAIN_DFLT_CTOR GREEN "- Brain: Default constructor called"  RESET
#define BRAIN_CTR LIGHT_CYAN "- Brain: constructor called"  RESET
#define BRAIN_CPY_CTOR CYAN "- Brain: Copy constructor called"  RESET
#define BRAIN_CPY_ASGMT_OP_CALL \
	DARK_CYAN "- Brain: Copy assignment operator called"  RESET
#define BRAIN_DTOR RED "- Brain: Destructor called"  RESET
#define BRAIN_MEMBER_FUNC_CALL "- Brain: member function called"
#define BRAIN_MK_SOUND "- Brain: MEOWWWWWWWW!"

enum e_brain_property { DFLT_SIZE = 50 };

#endif