#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

/*int main_memset(int argc, char **argv)
{
    if(argc > 3)
    {
        unsigned char *test1 = (unsigned char *) memset(argv[4], argv[2][0], atoi(argv[1]));
        printf("%s - %s\n", argv[4], test1);
        unsigned char *test2 = ft_memset(argv[4], argv[3][0], atoi(argv[1]));
        printf("%s - %s\n", argv[4], test2);
    }

    return (1);
}

int main_memcpy(int argc, char **argv)
{
    if(argc > 4)
    {
        char *test1 = (char *) memcpy(argv[1], argv[2], strlen(argv[2]));
        printf("%s - %s\n", argv[1], test1);
        char *test2 = ft_memcpy(argv[3], argv[4], strlen(argv[4]));
        printf("%s - %s\n", argv[4], test2);
    }

    return (1);
}

int main_memmove(int argc, char **argv)
{
    if(argc > 3)
    {
        char *test1 = (char *) memmove(argv[1], argv[2], atoi(argv[5]));
        printf("%s - %s\n", argv[1], test1);
        char *test2 = (char *) ft_memmove(argv[3], argv[4], atoi(argv[5]));
        printf("%s - %s\n", argv[3], test2);
    }

    return (1);
}*/

int main(int argc, char **argv)
{
    if(argc > 3)
    {
        size_t size = strlcpy(argv[1], argv[2], atoi(argv[5]));
        printf("%s - %ld\n", argv[1], size);
        size = strlcpy(argv[3], argv[4], atoi(argv[5]));
        printf("%s - %ld\n", argv[3], size);
    }

    return (1);
}