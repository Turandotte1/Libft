#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	k;
	size_t	j;

	k = 0;
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (s1[k])
	{
		j = 0;
		while (s1[k + j] == s2[j])
		{
			if (s2[j] =='\0')
				return ((char *)s1 + k);
			j++;
		}
		k++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%s\n", ft_strstr("oh no not the empty string !", ""));
	printf("%s\n", strstr("oh no not the empty string !", ""));
	return (0);
}
*/
