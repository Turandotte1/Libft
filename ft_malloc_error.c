#include "libft.h"

void		ft_malloc_error(int line, char *file)
{
	ft_printf("Memory allocation is failed at line %d in file %s\n", line, file);
}