

#include "libft.h"

void	ft_bzero(void *s, size_t length)
{
	ft_memset(s, '\0', length);
}