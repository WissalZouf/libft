#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
	if (!*s2)
		return ((char*)s1);
	if (!s1 && n == 0)
		return (NULL);
    while (s1[i] && i < n)
    {
        j = 0;
        while (s1[i + j] == s2[j] && i + j < n)
        {
            if (s2[j + 1] == '\0')
                return ((char *)(s1 + i));
            j++;    
        }
        i++;
    }
    return (0);
}

// int main()
// {
//     printf("%s", ft_strnstr("", "sfds", 576845));
// }