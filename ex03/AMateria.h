/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:13:45 by jgo               #+#    #+#             */
/*   Updated: 2023/05/21 20:43:04 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "const.h"

#define AMAT_DFLT_CTOR GREEN "- AMateria: Default constructor called" RESET
#define AMAT_CTR LIGHT_CYAN "- AMateria: constructor called" RESET
#define AMAT_CPY_CTOR CYAN "- AMateria: Copy constructor called" RESET
#define AMAT_CPY_ASGMT_OP_CALL \
	DARK_CYAN "- AMateria: Copy assignment operator called" RESET
#define AMAT_DTOR RED "- AMateria: Destructor called" RESET
#define AMAT_MEMBER_FUNC_CALL "- AMateria: member function called"

enum e_amateria { SLOT_SIZE = 4 };

#endif