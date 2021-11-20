#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *ptr;
    size_t i;
    i = 0;

    if (!s)
        return NULL;
    if (start >(unsigned int) ft_strlen ((char *)s))
        return ft_strdup ("");
    if (len > (size_t)ft_strlen ((char *)s + start))
        len = ft_strlen ((char *)s + start);

    ptr = malloc(sizeof(char) * (len + 1));
    if (!ptr)
        return (NULL);
    while ( i < len )
    {
        ptr[i] = s[start];
        i++;
        start++;
    }
    ptr[i] = '\0';
    return (ptr);

                
}
