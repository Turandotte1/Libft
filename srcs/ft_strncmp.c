/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 18:54:43 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/29 18:56:39 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1++ || *s2++) && (s1* == s2*))
	{
		if ((s1 || s2) == (n - 1))
			return (((unsigned char *)s1 - (unsigned char *)s2));
	}
	return (((unsigned char *)s1 - (unsigned char *)s2));
}
