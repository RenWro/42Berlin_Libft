
#include "libft.h"

char	*ft_strrchr(const char *str, int argument)
{
	int		length;

	length = ft_strlen(str);
	while (length >= 0)
	{
		if ((unsigned char) str[length] == (unsigned char)argument)
			return ((char *)&str[length]);
		length--;
	}
	return (NULL);
}