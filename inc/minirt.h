/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngpar <youngseo321@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:55:33 by youngpar          #+#    #+#             */
/*   Updated: 2022/05/28 21:32:43 by youngpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MINIRT_H
# define MINIRT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "structure.h"
#include "../opengl/mlx.h"

#define WIDTH	800
#define HEIGHT	600

/*
 *	Window
 */
bool	init_window(t_rt *rt);
int		destroy_win(t_rt *rt);

#endif
