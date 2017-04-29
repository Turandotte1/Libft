/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 14:28:23 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/29 18:50:55 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i++] && size--)
	{
		dest[j + i] = src[i];
		if (src[i] == '\0')
			dest[j + i] = src[i];
	}
	return (j + ft_strlen(src));
}
