
#include "libft.h"

void	*ft_memset(void *s, int argument, size_t length)
{
	size_t		i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < length)
	{
		str[i] = (unsigned char) argument;
		i++;
	}
	return (s);
}