
#include "libft.h"

void	ft_free_ptr(char **ptr)
{
	free(*ptr);
	*ptr = NULL;
}