#include "libft.h"

int ft_isset(const char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_isset(set, s1[start]))
		start++;
	while (ft_isset(set, s1[end]) && end > 0)
		end--;
	if (start > end)
		return ft_strdup("");
	return ft_substr(s1, start, end - start + 1);
}