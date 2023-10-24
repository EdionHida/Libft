/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:00:37 by ehida             #+#    #+#             */
/*   Updated: 2023/10/20 15:01:51 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubed.h"

void    check_fc(char *line, t_map *map)
{
	printf("\033[0;32mIn check_fc.c\n\033[0m");
	int		i;
	char	**rgb;
	
	i = 1;
	while (line[i] == 32)
		i++;
	rgb = ft_split((line + i), ',');
	i = 0;
	while (rgb[i])
	{
		if (ft_atoi(rgb[i]) < 0 || ft_atoi(rgb[i]) > 255)
			ft_exit(2);
		i++;
	}
	fill_rgb(map, line, rgb);
	free_2d((void **)rgb);
}
