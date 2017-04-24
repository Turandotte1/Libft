/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 12:19:35 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/24 12:27:11 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*cdest;
	unsigned char	*csrc;
	size_t			i;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	i = 0;
	if (dest = src || n == 0)
		return (dest);
	while (i < n)
	{
		cdest[i++] = csrc[i++];
		if (cdest[i] == c)
			return (cdest + i + 1);
	}
	return (NULL);
}
