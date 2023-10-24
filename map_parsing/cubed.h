/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cubed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:58:05 by ehida             #+#    #+#             */
/*   Updated: 2023/10/24 01:18:31 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBED_H
# define CUBED_H

# include <math.h>
# include <stdio.h> // DELETE
# include <fcntl.h>
# include "libft/libft.h"

typedef struct s_vec
{
	char	**map;
	int		capacity;
	int		curr;
}	t_vec;

typedef struct s_data
{
	char	*path_n;
	char	*path_e;
	char	*path_w;
	char	*path_s;
	int		frgb[3];
	int		crgb[3];
	int		dup[6];
	float		x;
	float		y;
	float		angle;
}	t_data;

typedef struct s_map
{
	int		rows;
	int		len;
	int		check;
	char	**map;
	char	**copy_map;
	t_data	data;
}	t_map;


void	ft_exit(int error);
void	init_map(t_map *map);
void	init_myvec(t_vec *vec);
void	realloc_vec(t_vec *vec);
void	validate_map(t_map *map);
int		map_format(char *map_name);
int		check_dup(t_map *map, int num);
void	get_map(char *line, t_vec *vec);
void    check_fc(char *line, t_map *map);
void    check_news(char *line, t_map *map);
int		check_if_map(char *line, t_map *map);
void	validate_file(char *file, t_map *map);
void	fill_rgb(t_map *map, char *line, char **rgb);
void	check_line(char *line, t_map *map, t_vec *vec);

#endif

//N - Pi / 2
//S - (3 * Pi) / 2
//W - Pi
//E - 0