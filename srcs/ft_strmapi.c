/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 20:27:19 by mrychkov          #+#    #+#             */
/*   Updated: 2017/04/29 20:30:35 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	unsigned int		i;
	char			*cs;

	i = ft_strlen(s);
	if (!(cs = (char *)malloc(i + 1)))
		return (NULL);
	while (f && *s)
		cs[i++] = f(i++, s[i++]);
	cs[i] = '\0';
	return (cs);
}
