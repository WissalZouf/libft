#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *str;
    

    i = 0;
    str = (unsigned char *)s;
;
    i = 0;

    while (i < n)
    {
        if ( *str == (unsigned char )c)
           return(str);
     str++;
     i++;
           
    }
    return(NULL);

}