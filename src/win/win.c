/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:02:22 by anlima            #+#    #+#             */
/*   Updated: 2024/01/19 15:10:02 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3D.h"

int		close_win_x(t_win	*win);

int	close_win_x(t_win	*win)
{
	(void)(win);
	finish_execution();
	return (0);
}
