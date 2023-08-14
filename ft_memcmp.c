/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 07:41:25 by ehida             #+#    #+#             */
/*   Updated: 2023/08/14 07:51:25 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if ((*(unsigned char *)s1) != (*(unsigned char *)s2))
			return ((*(unsigned char *)s1) - (*(unsigned char *)s2));
		n--;
		s1++;
		s2++;
	}
	return (0);
}
