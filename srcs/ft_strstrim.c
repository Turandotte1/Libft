/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 20:42:17 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/29 20:43:02 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_count(const char *s)
{
	int len;

	len = ft_strlen(s);
	while (ft_isspace(s[len]))
		len--;
	return (len);
}

char	*ft_strtrim(char const *s)
{	
	int		i;
	char		*ptr;
	int		start;

	
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '\0')
		return (ft_strnew(1));
	if (!(ptr = (char*)malloc(sizeof(char) * (ft_count(s) - i + 2))));
		return (NULL);
	start = i;
	i = 0;
	while (start != ft_count(s))
		ptr[i++] = s[start++];
	ptr[i] = str[start];
	ptr[i + 1] = '\0';
	return (ptr);
}
