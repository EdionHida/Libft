/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 23:27:15 by ehida             #+#    #+#             */
/*   Updated: 2023/10/24 01:15:06 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubed.h"

static void	first_last(t_map *map, int i, int j, int click)
{
	if (map->map[i][j] == '1')
		return ;
	else if (map->map[i][j] == '0')
		ft_exit(6);
	else if (map->map[i][j] == 32)
	{
		if (map->map[i + click][j] == '0')
			ft_exit(6);
	}
	else
		ft_exit(6);
}

static void	middle(t_map *map, int i, int j)
{
	if (map->map[i][j] == '1')
		return ;
	else if (map->map[i][j] == '0')
	{
		if (j == 0)
			ft_exit(6);
		else if ((size_t)j == (ft_strlen(map->map[i]) - 1))
			ft_exit(6);
		else if (map->map[i + 1][j] == 32 || map->map[i - 1][j] == 32)
			ft_exit(6);
	}
	else if (map->map[i][j] == 32)
	{
		if (map->map[i][j + 1] != 32 && map->map[i][j + 1] != '1')
			ft_exit(6);
	}
}

void	validate_map(t_map *map)
{
	printf("\033[0;32mIn validate_map.c\n\033[0m");
	int i;
	int j;

	i = 0;
	while (i < map->rows)
	{
		j = 0;
		while (map->map[i][j] != '\0')
		{
			if (i == 0)
				first_last(map, i, j, 1);
			else if (i == (map->rows - 1))
				first_last(map, i, j, -1);
			else
				middle(map, i, j);
			j++;
		}
		i++;
	}
		
}
