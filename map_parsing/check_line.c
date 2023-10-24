/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:03:43 by ehida             #+#    #+#             */
/*   Updated: 2023/10/23 23:23:14 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubed.h"

void    check_line(char *line, t_map *map, t_vec *vec)
{
    if (ft_strncmp(line, "NO ", 3) == 0 || ft_strncmp(line, "SO ", 3) == 0 || \
        ft_strncmp(line, "WE ", 3) == 0 || ft_strncmp(line, "EA ", 3) == 0)
        check_news(line, map);
    else if (ft_strncmp(line, "F ", 2) == 0 || ft_strncmp(line, "C ", 2) == 0)
        check_fc(line, map);
    else if (*line == '\0')
        return ;
    else if (check_if_map(line, map) == 0)
        get_map(line, vec);
    else
        ft_exit(4);
}
