/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_myvec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:25:11 by ehida             #+#    #+#             */
/*   Updated: 2023/10/20 14:46:14 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubed.h"

void	init_myvec(t_vec *vec)
{
	printf("\033[0;32mIn init_myvec.c\n\033[0m");
	vec->capacity = 10;
	vec->curr = 0;
	vec->map = (char **)malloc(sizeof(char *) * vec->capacity);
}
