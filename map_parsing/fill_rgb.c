/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_rgb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:15:18 by ehida             #+#    #+#             */
/*   Updated: 2023/10/20 01:10:08 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubed.h"

void	fill_rgb(t_map *map, char *line, char **rgb)
{
	printf("\033[0;32mIn fill_rgb.c\n\033[0m");
	int	i;
	
	i = 0;
	if (line[0] == 'F' && check_dup(map, 4) == 0 && i <= 2)
	{
		while (i <= 2)
		{	
			map->data.frgb[i] = ft_atoi(rgb[i]);
			i++;
		}
		map->check++;
	}
	else if (line[0] == 'C' && check_dup(map, 5) == 0 && i <= 2)
	{
		while (i <= 2)
		{
			map->data.crgb[i] = ft_atoi(rgb[i]);	
			i++;
		}
		map->check++;
	}
}
