#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t start;
    size_t i;
    size_t max;
    size_t src_len;

    start = ft_strlen(dst);
    src_len = ft_strlen((char*)src);

    i = 0;
    while (i + start + 2 <= size && src[i]) {
        dst[start + i] = src[i];
        i++;
    }
    dst[start + i] = '\0';
    max = start;
    if (size > src_len)
        max += src_len;
    else
        max += size;
    return (max);
}