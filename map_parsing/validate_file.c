/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:36:21 by ehida             #+#    #+#             */
/*   Updated: 2023/10/20 14:56:44 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubed.h"

void	validate_file(char *file, t_map *map)
{
	printf("\033[0;32mIn validate_file.c\n\033[0m");
	int		fd;
	char	*line;
	t_vec	my_vec;
	
	fd = open(file, O_RDONLY);
	if (fd == -1)
		exit(1); // handle error
	line = get_next_line(fd);
	init_myvec(&my_vec);
	while (line)
	{
		check_line(line, map, &my_vec);
		free(line);
		line = get_next_line(fd);
	}
	map->map = my_vec.map;
	map->rows = my_vec.curr;
}
