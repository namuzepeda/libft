#include "libft.h"

void    *ft_memmove (void *dest, const void *src, size_t len)
{
    size_t  i;
    int count;

    i = -1;
    count = 0;

    while(len > ++i)
    {
        *(char*)dest++ = *(char*)src++;
        count++;
    }

    return (dest-=count);
}