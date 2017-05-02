/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 21:00:19 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/29 18:47:51 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s)
{
	char	*abc;

	if (!(abc = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (*s)
		*abc++ = *s++;
	*abc = '\0';
	return (abc);
}
