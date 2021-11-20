#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t t;

    j = ft_strlen(src);
    t = ft_strlen(dst);
    i = 0;
    if (size <= t)
        return (j + size);
    while (src[i] && i + t < size - 1)
    {
        dst[t + i] = src[i];
        i++;
    }
    dst[t + i] = '\0';
    return (t + j); 
}