#include "libft.h"
void *ft_calloc(size_t nmemb, size_t size)
{
    char *t;

    t = malloc( (nmemb * size ));
    if (!t)
        return(NULL);
        ft_bzero(t, size * nmemb);
        return ((void *)t);
    
}