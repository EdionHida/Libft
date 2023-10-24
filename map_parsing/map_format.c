/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_format.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:05:24 by ehida             #+#    #+#             */
/*   Updated: 2023/10/18 15:00:10 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubed.h"

int	map_format(char *map_name)
{
	printf("\033[0;32mIn map_format.c\n\033[0m");
	int		len;
	char	*sub_res;

	len = (ft_strlen(map_name) - 4);
	if (len < 0)
		ft_exit(0);
	sub_res = ft_substr(map_name, len, 4);
	if (ft_strncmp(sub_res, ".cub", 4) || ft_strlen(map_name) <= 4)
	{
		free(sub_res);
		return (0);
	}
	else
	{
		free(sub_res);
		return (1);
	}
}
