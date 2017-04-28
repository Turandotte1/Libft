#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t i;
	char *ptr;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (i++ < size)
	{
		if (i + 1 == size)
		{
			ptr[i] = '\0';
			ptr[i + 1] = '\0';
			return (ptr);
		}
		ptr[i] = '\0';		
	}
	free (ptr);
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strnew((429496730)));
	return (0);
}
*/
