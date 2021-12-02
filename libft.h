#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

size_t ft_strlen(char *str);
void *ft_memset( void * pointer, int value, size_t count );
void    *ft_memcpy (void *dest, const void *src, size_t len);
void    *ft_memmove (void *dest, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);

#endif