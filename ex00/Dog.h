/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:48:59 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 15:00:56 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "Animal.hpp"
#include "const.h"

#define DOG_DFLT_CTOR GREEN"- Dog: Default constructor called" RESET
#define DOG_CTR LIGHT_CYAN"- Dog: constructor called" RESET
#define DOG_CPY_CTOR CYAN"- Dog: Copy constructor called" RESET
#define DOG_CPY_ASGMT_OP_CALL DARK_CYAN"- Dog: Copy assignment operator called" RESET
#define DOG_DTOR RED"- Dog: Destructor called" RESET
#define DOG_MEMBER_FUNC_CALL "- Dog: member function called"
#define DOG_MK_SOUND "- Dog: BarkBark!!!"


#endif