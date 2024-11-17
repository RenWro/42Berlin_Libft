#include "libft.h"

void	*ft_memchr(const void *str, int argument, size_t size)
{
	unsigned char	*s;
	size_t		i;

	i = 0;
	s = (unsigned char *) str;
	while (i < size)
	{
		if (*(s + i) == (unsigned char) argument)
			return ((void *) s + i);
		i++;
	}
	return (NULL);
}