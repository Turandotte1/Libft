/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 20:44:47 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/29 20:45:13 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_itoa(int n)
{
	char		*ptr;
	int		len;

	len = ft_int_size(n);
	ptr = ft_strnew(size);
	size--;
	ptr[0] = '0';
	if (n < 0)
		*ptr = '-';
	while (n)
	{
		if (n < 0)
			ptr[len--] = 48 - n % 10;
		else
			ptr[len--] = 48 + n % 10;
		n = n / 10;
	}
	return (ptr);
}
