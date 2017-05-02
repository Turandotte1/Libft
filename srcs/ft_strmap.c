/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 20:25:18 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/29 20:27:04 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmap(char const *s, char(*f)(char))
{
	char	*cs;

	if (!(cs = malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (f && *s)
		*cs++ = f(*s++);
	*cs = '\0';
	return (cs);
}
