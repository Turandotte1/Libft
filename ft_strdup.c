/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 21:00:19 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/24 14:37:00 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*abc;

	len = ft_strlen(*s1);
	abc = (char*)malloc(sizeof(*abc) * len + 1);
	while (len)
		*abc++ = *src++;
	abc[len] = '\0';
	return (abc);
}
