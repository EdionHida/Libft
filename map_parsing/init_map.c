/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:28:10 by ehida             #+#    #+#             */
/*   Updated: 2023/10/24 01:19:05 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubed.h"

void	init_map(t_map *map)
{
	printf("\033[0;32mIn init_map.c\n\033[0m");
	
	map->len				= 0;
	map->rows				= 0;
	map->check				= 0;
	map->map				= NULL;
	map->copy_map			= NULL;
	map->data.path_n		= NULL;
	map->data.path_e		= NULL;
	map->data.path_w		= NULL;
	map->data.path_s		= NULL;
	map->data.x				= 0;
	map->data.y				= 0;
	map->data.angle			= 0;
}
