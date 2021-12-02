#include "libft.h"

size_t ft_strlen(char *str)
{
	size_t	i;

	i = -1;
	while (str[++i])
		i++;
	return (i);
}