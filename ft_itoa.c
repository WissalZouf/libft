/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzouf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:18:43 by wzouf             #+#    #+#             */
/*   Updated: 2021/11/16 18:50:13 by wzouf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_alloc(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*ptr;
	int				i;
	unsigned int	nb;

	if (n == 0)
		return ft_strdup("0");
	i = ft_alloc (n);
	ptr = malloc(sizeof (char) * (i + 1));
	if (!ptr)
		return (NULL);
	ptr [i] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		nb = -n;
	}
	else
		nb = n;
	while (--i)
	{
		ptr [i] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (nb != 0)
		ptr[0] = (nb % 10) + '0';
	return (ptr);
}
