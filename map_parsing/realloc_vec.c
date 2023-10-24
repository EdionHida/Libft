/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc_vec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:47:33 by ehida             #+#    #+#             */
/*   Updated: 2023/10/20 14:52:59 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubed.h"

void	realloc_vec(t_vec *vec)
{
	printf("\033[0;32mIn realloc_vec.c\n\033[0m");
	char	**new_map;
	int		i;

	vec->capacity = vec->capacity * 2;
	new_map = (char **)malloc(sizeof(char *) * vec->capacity);
	i = 0;
	while (i < vec->curr)
	{
		new_map[i] = vec->map[i];
		i++;
	}
	free(vec->map);
	vec->map = new_map;
}
