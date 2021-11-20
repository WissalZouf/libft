#include "libft.h"
char *ft_strdup(const char *s)
{
    char *t;
    size_t i;
    size_t j;


    j = 0;

    i = ft_strlen(s);
    t = malloc((i + 1 )* sizeof(char));
    if (!t)
        return (0);
    
    while(s[j])
    {
        t[j]= s[j];
        j++;

    }   
    t[j] = 0; 
    return (t);
}