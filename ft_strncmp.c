#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    
    unsigned char *t1;
    unsigned char *t2;
    size_t             i;

    t1 = (unsigned char *)s1;
    t2 = (unsigned char *)s2;
    i  = 0;

    while (i < n && (s1[i] || s2[i]) )
    {
        if (t1[i] != t2[i])
            return (t1[i] - t2[i]);
        i++;
       
    }
    return (0);


}
