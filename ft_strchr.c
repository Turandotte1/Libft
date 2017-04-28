#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}
/*
int	main(void)
{
	printf("%s\n", ft_strchr("bonbons", '\0'));
	printf("%s\n", strchr("bonbons", '\0'));
	return (0);
}
*/
