#include "libft.h"

void    *ft_memcpy (void *dest, const void *src, size_t len)
{

    int count;

    count = len;

    while (len)
    {
        *(char*)dest++ = *(const char*)src++;
        len--;
    }
    dest -= count;
    return dest;
}