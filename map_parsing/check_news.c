/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_news.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:22:13 by ehida             #+#    #+#             */
/*   Updated: 2023/10/23 23:24:37 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubed.h"

void    check_news(char *line, t_map *map)
{
	// YOU STOPPED HERE TRYING TO FIND A WAY TO CHECK FOR DUPLICATES NEWS AND FC
	// IN THE DATA STRUCT ADD AN ARRAY OF 6 AND LATER WE WILL THINK IF THERE IS 
	// AN EASIER WAY.
	printf("\033[0;32mIn check_news.c\n\033[0m");
	int		i;
	size_t	len;
	
	i = 2;
	len = ft_strlen(line);
	while (line[i] == 32)
		i++;
	if (line[0] == 'N' && check_dup(map, 0) == 0 && ++map->check)
		map->data.path_n = ft_substr(line, i, (len - i));
	else if (line[0] == 'E' && check_dup(map, 1) == 0 && ++map->check)
		map->data.path_e = ft_substr(line, i, (len - i));
	else if (line[0] == 'W' && check_dup(map, 2) == 0 && ++map->check)
		map->data.path_w = ft_substr(line, i, (len - i));
	else if (line[0] == 'S' && check_dup(map, 3) == 0 && ++map->check)
		map->data.path_s = ft_substr(line, i, (len - i));
}
