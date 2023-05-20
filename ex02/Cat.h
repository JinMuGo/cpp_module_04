/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:48:59 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 15:09:46 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <cstdlib>
#include "Animal.hpp"
#include "Brain.hpp"
#include "const.h"

#define CAT_DFLT_CTOR GREEN "- Cat: Default constructor called"  RESET
#define CAT_CTR LIGHT_CYAN "- Cat: constructor called"  RESET
#define CAT_CPY_CTOR CYAN "- Cat: Copy constructor called"  RESET
#define CAT_CPY_ASGMT_OP_CALL \
	DARK_CYAN "- Cat: Copy assignment operator called"  RESET
#define CAT_DTOR RED "- Cat: Destructor called"  RESET
#define CAT_MEMBER_FUNC_CALL "- Cat: member function called"
#define CAT_MK_SOUND "- Cat: MEOWWWWWWWW!"

#endif