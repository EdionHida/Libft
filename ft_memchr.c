/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 04:29:22 by ehida             #+#    #+#             */
/*   Updated: 2023/08/14 07:39:40 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!s || n == 0)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s) == (unsigned char)c)
			return ((void *)s);
		i++;
		s++;
	}
	return (NULL);
}
