
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int i;
    int j;

    if(!s1 || !s2)
        return NULL;
    if (!(str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
        return NULL;
    i = -1;
    while (s1[++i])
        str[i] = s1[i];
    j = -1;
    while (s2[++j])
    {
        str[i] = s2[j];
        i++;
    }
    str[i] = '\0';
    return str;
}