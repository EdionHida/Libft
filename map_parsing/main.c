/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:58:43 by ehida             #+#    #+#             */
/*   Updated: 2023/10/24 01:28:16 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubed.h"

int main(int argc, char **argv)
{
    t_map	map;

	if (argc != 2 || !map_format(argv[1]))
        ft_exit(0);
    init_map(&map);
    validate_file(argv[1], &map);
    validate_map(&map);
    printf("angle: %f\n", map.data.angle);
    return (0);
}
