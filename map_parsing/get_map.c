/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:06:47 by ehida             #+#    #+#             */
/*   Updated: 2023/10/24 00:13:39 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubed.h"

void	get_map(char *line, t_vec *vec)
{
	printf("\033[0;33mIn get_map.c\n\033[0m");
	if (vec->curr == vec->capacity)
		realloc_vec(vec);
	vec->map[vec->curr] = ft_strdup(line);
	vec->curr++;
}
