/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:17:23 by anlima            #+#    #+#             */
/*   Updated: 2023/12/22 15:59:58 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3D.h"

void	clean_mallocs(void);
int		get_flag(char *line);
void	free_dptr(char **str);
void	finish_execution(void);
char	*ft_strjoin_char(char *str, char c);

void	clean_mallocs(void)
{
	free_dptr(map()->map);
	free(map()->no);
	free(map()->so);
	free(map()->ea);
	free(map()->we);
}

int	get_flag(char *line)
{
	int	i;
	int	flag;

	i = -1;
	flag = 0;
	while (line[++i])
	{
		if (!flag && ft_isalnum(line[i]))
			flag = 1;
	}
	return (flag);
}

void	free_dptr(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
}

char	*ft_strjoin_char(char *str, char c)
{
	int		i;
	char	*joined;

	i = -1;
	joined = (char *)malloc(sizeof(char) * (ft_strlen(str) + 2));
	while (str[++i])
		joined[i] = str[i];
	joined[i++] = c;
	joined[i] = '\0';
	return (joined);
}

void	finish_execution(void)
{
	mlx_destroy_window(win()->mlx, win()->mlx_win);
	mlx_destroy_image(win()->mlx, win()->bg.mlx_img);
	mlx_destroy_display(win()->mlx);
	clean_mallocs();
	exit(0);
}
