#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char *cs;

	cs = (char *)s + ft_strlen(s);
	while (*cs-- != c)
		cs == s ? NULL : cs;
	return (cs);
}
/*
int	main(void)
{
	printf("%s\n", ft_strrchr("bonbons", '\0'));
	printf("%s\n", strrchr("bonbons", '\0'));
	return (0);
}
*/
