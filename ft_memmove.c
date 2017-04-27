/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 12:57:11 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/24 14:30:12 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *new;

	new = ft_strnew(len);
	if (new)
	{
		src = ft_memcpy(new, src, len);
		dst = ft_memcpy(dst, new, len);
	}
	return (dst);

/*
int	main(void)
{
	char dest[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char *src = "thi\xffs i\xfas \0a g\xde\xadood \0nyan\0cat\0 !\r\n";
	printf("%s\n", ft_memmove(dest, src, 26));
	printf("%s\n", memmove(dest, src, 33));
	return (0);
}
*/	
