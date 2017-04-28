#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t len)
{
	const  char *cs;

	cs = (const char *)s;
	return (len == 0 ? NULL : ft_strnchr(s, c, len));
}

/*
int	main(void)
{
   printf("%s\n", ft_memchr("/|\x12\xff\x09\x42\042\42|\\", '\x42', 8));
   printf("%s\n", memchr("/|\x12\xff\x09\x42\042\42|\\", '\x42', 8));
   return (0);
}
*/
