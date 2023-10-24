/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:10:46 by ehida             #+#    #+#             */
/*   Updated: 2023/10/23 23:36:33 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubed.h"

//PUT THE PROPER MESSAGES
void	ft_exit(int error)
{
	printf("\033[0;32mIn ft_exit.c\n\033[0m");
	if (error == 0)
    {
		printf("\033[0;31mError\nIncorrect input.\n\033[0m");
		printf("\033[0;32mTry: ./cubed [file_name.cub]\n\033[0m");
    }
	else if (error == 1)
		printf("\033[0;31mError\nElement is not in order.\n\033[0m");
	else if (error == 2)
		printf("\033[0;31mError\nWrong RGB range.\n\033[0m");
	else if (error == 3)
		printf("\033[0;31mError\nDuplicate element.\n\033[0m");
	else if (error == 4)
		printf("\033[0;31mError\nUnknown element.\n\033[0m");
	else if (error == 5)
		printf("\033[0;31mError\nMap shoulb be last\n\033[0m");
	else if (error == 6)
		printf("\033[0;31mError\nNot closed by walls\n\033[0m");
	else if (error == 7)
		printf("\033[0;31mError: More than one player.\n\033[0m");
	else if (error == 8)
		printf("\033[0;31mError: Path is not valid.\n\033[0m");
	else if (error == 404)
		printf("\033[0;31mError: Malloc or open, failed.\n\033[0m");
	exit(1);
}
