/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 12:19:35 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/24 12:27:11 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*cdest;
	unsigned char	*csrc;
	
	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	while (n--)
	{
		*cdest++ = *csrc++;
		if (*csrc == c)
			return (cdest + 1);
	}
	return (NULL);
}
/*
int	main(void)
{
	char *src = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char dest[80];
	printf("%p\n", ft_memccpy(dest, src, 'F', strlen(src)));
	printf("%p\n", memccpy(dest, src, 'F', strlen(src)));
	return (0);
}
*/
