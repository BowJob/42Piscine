/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 14:43:36 by kvo               #+#    #+#             */
/*   Updated: 2016/07/24 14:43:38 by kvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

#include <unistd.h>
#include <stdlib.h>
#include "initialize_puzzle.h"

int		check_rows(char *argv);
int		check_duplicate(char *argv, char *nums);
int		check_num_clues(char **argv);

#endif
