#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;

    i = 0;

    if (src && dst)
    {
        while (--size)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (i);
}