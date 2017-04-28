//#include <string.h>
//#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = ft_strlen(s2);
	if (*s2 == 0)
		return ((char *)s1);
	while (*s1++ && n-- >= len)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, len) == 0)
			return ((char *)s1);
	}	
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strnstr("Aabcdefghiabcdefghij", "j",20));
	return (0);
}
*/
