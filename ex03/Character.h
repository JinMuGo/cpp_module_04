/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:37:24 by jgo               #+#    #+#             */
/*   Updated: 2023/05/21 20:43:08 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"
#include "const.h"

#define CHAR_DFLT_CTOR GREEN "- Character: Default constructor called" RESET
#define CHAR_CTOR DARK_GREEN "- Character: constructor called" RESET
#define CHAR_CTR LIGHT_CYAN "- Character: constructor called" RESET
#define CHAR_CPY_CTOR CYAN "- Character: Copy constructor called" RESET
#define CHAR_CPY_ASGMT_OP_CALL \
	DARK_CYAN "- Character: Copy assignment operator called" RESET
#define CHAR_DTOR RED "- Character: Destructor called" RESET
#define CHAR_MEMBER_FUNC_CALL "- Character: member function called"

#endif