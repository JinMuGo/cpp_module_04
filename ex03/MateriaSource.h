/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:35:56 by jgo               #+#    #+#             */
/*   Updated: 2023/05/21 20:43:32 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_H
#define MATERIA_SOURCE_H

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "const.h"

#define MAT_SRC_DFLT_CTOR \
	GREEN "- MateriaSource: Default constructor called" RESET
#define MAT_SRC_CTR LIGHT_CYAN "- MateriaSource: constructor called" RESET
#define MAT_SRC_CPY_CTOR CYAN "- MateriaSource: Copy constructor called" RESET
#define MAT_SRC_CPY_ASGMT_OP_CALL \
	DARK_CYAN "- MateriaSource: Copy assignment operator called" RESET
#define MAT_SRC_DTOR RED "- MateriaSource: Destructor called" RESET
#define MAT_SRC_MEMBER_FUNC_CALL "- MateriaSource: member function called"

#endif