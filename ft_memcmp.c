#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *cs1;;
	unsigned char *cs2;;

	cs1 = (unsigned char*)s1;
	cs2 = (unsigned char*)s2;
	return (ft_strncmp(s3, s4, n));
}
/*
int	main(void)
{
	const char *s1;
	const char *s2;
	s1 = "\xff\0\0\xaa\0\xde\xffMACOSX\xff";
	s2 = "\xff\0\0\xaa\0\xde\x00MBS";
	size_t n = 9;
i	printf("%d\n", ft_memcmp(s1, s2, n));
	printf("%d\n", memcmp(s1, s2, n));
	return (0);
}
*/
