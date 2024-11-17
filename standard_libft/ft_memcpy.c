
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t length)
{
	size_t		i;
	char		*dest_ptr;
	const char	*src_ptr;

	i = 0;
	if (!dest && !src)
		return (NULL);
	dest_ptr = (char *) dest;
	src_ptr = (const char *) src;
	while (i < length)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}