
#include "libft.h"

void	free_str_array(char **array)
{
	int	string;

	string = 0;
	while (array[string])
		free(array[string++]);
	free(array);
}