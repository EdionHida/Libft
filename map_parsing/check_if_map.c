/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:07:10 by ehida             #+#    #+#             */
/*   Updated: 2023/10/24 01:27:36 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubed.h"

static void	set_angle(char c, t_map *map)
{
	if (c == 'N')
		map->data.angle = 3.14 / 2;
	else if (c == 'E')
		map->data.angle = 0;
	else if (c == 'W')
		map->data.angle = 3.14;
	else if (c == 'S')
		map->data.angle = (3 * 3.14) / 2;
}

int	check_if_map(char *line, t_map *map)
{
	printf("\033[0;32mIn check_if_map.c\n\033[0m");
	int	i;

	i = 0;
	if (map->check != 6)
		ft_exit(5);
	while (line[i] != '\0')
	{
		if (line[i] == '0' || line[i] == '1' || line[i] == 32)
			i++;
		else if (line[i] == 'N' || line[i] == 'E' || line[i] == 'W' || \
				line[i] == 'S')
		{
			set_angle(line[i], map);
			i++;
		}
		else
			return (1);
	}
	return (0);
}
