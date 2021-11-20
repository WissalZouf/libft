
int ft_atoi(const char *str)
{
    int	i;
	int	j;
	int	total;

	i = 0;
	j = 1;
	total = 0;
	while (str[i] && (str[i] == '\n' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v'))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - 48);
		i++;
	}
	return (total * j);
}
