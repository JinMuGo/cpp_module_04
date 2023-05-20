/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:26:46 by jgo               #+#    #+#             */
/*   Updated: 2023/05/20 15:00:56 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "const.h"

#define ANI_DFLT_CTOR (GREEN " Animal: Default constructor called" RESET)
#define ANI_CTR LIGHT_CYAN" Animal: constructor called" RESET
#define ANI_CPY_CTOR CYAN" Animal: Copy constructor called" RESET
#define ANI_CPY_ASGMT_OP_CALL DARK_CYAN" Animal: Copy assignment operator called" RESET
#define ANI_DTOR RED" Animal: Destructor called" RESET
#define ANI_MEMBER_FUNC_CALL " Animal: member function called"
#define ANI_MK_SOUND " Animal: Does Animal make sound?"

#endif