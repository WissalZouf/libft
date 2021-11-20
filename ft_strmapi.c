#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	unsigned int i;

	i=0;
 	if (!s)
		return (NULL);
	str = ft_strdup(s);
 	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i,s[i]);
		i++;
	}
	return (str);
}