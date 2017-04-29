/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 19:04:25 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/29 19:08:16 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	k;
	size_t	j;

	k = 0;
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (s1[k])
	{
		j = 0;
		while (s1[k + j] == s2[j])
		{
			if (s2[j] == '\0')
				return ((char *)s1 + k);
			j++;
		}
		k++;
	}
	return (0);
}
