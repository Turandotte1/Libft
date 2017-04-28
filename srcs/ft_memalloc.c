#include "libft.h"

void	*ft_memalloc(size_t size)
{
	return (ft_strnew(size));
}
/*
int	main(void)
{
	printf("%s\n", ft_memalloc((9223372036854775807L *2UL+1UL)));
	return (0);
}
*/	
