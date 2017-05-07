#include "libft.h"

char	*ft_strrev(char *s)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
	return (s);
}
