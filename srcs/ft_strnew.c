/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 19:23:17 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/29 19:34:05 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (i++ < size)
	{
		if (i + 1 == size)
		{
			ptr[i] = '\0';
			ptr[i + 1] = '\0';
			return (ptr);
		}
		ptr[i] = '\0';
	}
	return (NULL);
}
