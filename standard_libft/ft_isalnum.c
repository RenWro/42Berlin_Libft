#include "libft.h"

int	ft_isalnum(int argument)
{
	return (ft_isdigit(argument) || ft_isalpha(argument));
}