/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 14:51:05 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/29 18:54:35 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a++])
		;
	while (src[b] && b < nb)
		dest[a++] = src[b++];
	dest[a] = '\0';
	return (dest);
}
