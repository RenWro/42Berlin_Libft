
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	char		*dest_ptr;
	const char	*src_ptr;

	dest_ptr = (char *) dest;
	src_ptr = (const char *) src;
	if (dest > src)
	{
		while (length > 0)
		{
			length--;
			dest_ptr[length] = src_ptr[length];
		}
	}
	else
		ft_memcpy(dest, src, length);
	return (dest);
}