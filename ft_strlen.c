#include "libft.h"

int ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (++str[i])
		i++;
	return (i);
}