/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 11:57:59 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/24 12:19:13 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *cb;

	cb = (unsigned char *)b;
	if (len == 0)
		return (b);
	while (len--)
	{
		*cb = (unsigned char)c;
		if (len)
			cb++;
	}
	return (b);
}
