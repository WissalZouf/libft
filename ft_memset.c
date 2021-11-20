
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *d;

    d = (unsigned char *)s;
    while(n--)
        d[n] = (unsigned char)c;
    return (s);
}
