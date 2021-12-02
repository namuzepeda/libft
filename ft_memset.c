#include "libft.h"

void *ft_memset( void * pointer, int value, size_t count )
{

	int count2;

	count2 = count;
	while (count)
	{
		*(unsigned char *)pointer = value;
		pointer++;
		count--;
	}
	pointer -= count2;
	return (pointer);
}