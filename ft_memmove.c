
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    
    if (dest > src)
    {
        while (n--)
            d[n] = s[n];
    }
    else
    {
        ft_memcpy(dest, src, n);
    }
    return dest;
}