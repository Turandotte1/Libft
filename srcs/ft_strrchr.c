/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 19:00:46 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/29 19:01:52 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	char *cs;

	cs = (char *)s + ft_strlen(s);
	while (*cs-- != c)
		cs == s ? NULL : cs;
	return (cs);
}
