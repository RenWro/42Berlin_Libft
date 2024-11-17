
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && p1[i] == p2[i])
		i++;
	return (p1[i] - p2[i]);
}