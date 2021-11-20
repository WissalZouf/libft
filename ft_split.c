
#include "libft.h"

void ft_free_table(char **tab, int len)
{
    int i = 0;

    while (i < len)
    {
        free(tab[i]);
        tab[i] = NULL;
        i++;
    }
    free(tab);
    tab = NULL;
}

void ft_gettables(char *str, char c, char **s)
{
    size_t i;
    size_t count;
    size_t end;

    i = 0;
    count = 0;
    while (i < ft_strlen(str))
    {
        end = i;
        while (str[end] && str[end] != c)
            end++;
        if (end > i)
        {
            if (!(s[count] = malloc(sizeof(char) * (end - i + 1))))
                ft_free_table(s, count);
            ft_strlcpy(s[count], &str[i], end - i + 1);
            count++;
            i = end;
        }
        i++;
    }
    s[count] = NULL;
}

int ft_count(char *str, char c)
{
    size_t i;
    size_t count;
    size_t end;

    i = 0;
    count = 0;
    if (!str[0])
        return 1;
    while (i < ft_strlen(str))
    {
        end = i;
        while (str[end] && str[end] != c)
            end++;
        if (end > i)
        {
            count++;
            i = end;
        }
        i++;
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    int count;
    char **str;

    if (!s)
        return NULL;
    count = ft_count((char *)s, c);
    str = (char **)malloc(sizeof(char *) * (count + 1));
    if (!str)
        return NULL;
    ft_gettables((char*)s, c, str);
    return str;
}

// int main()
// {
//     ft_split("\0aa\0vdf", '\0');
// }