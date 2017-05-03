/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 20:27:19 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/29 20:30:35 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	unsigned int		i;
	char			*cs;
	
	i = 0;
	if (!(cs = (char *)malloc(sizeof(*cs) * (ft_strlen(s) + 1))))
		return (NULL);
	while (f && *s)
	{
		cs[i] = (*f)(i, s[i]);
		i++;
	}
	cs[i] = '\0';
	return (cs);
}
