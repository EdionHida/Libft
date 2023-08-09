/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:07:46 by ehida             #+#    #+#             */
/*   Updated: 2023/08/09 17:26:37 by ehida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (s && i)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		i--;
	}
	return (NULL);
}
