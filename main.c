/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzouf <wzouf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:05:13 by wzouf             #+#    #+#             */
/*   Updated: 2021/11/20 15:10:18 by wzouf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

void modif(void *content)
{
	content = ft_strdup("ayoub");
	// printf("%s\n",content);
}

int main()
{
	// t_list *tmp;

	// tmp = ft_lstnew("a");
	// ft_lstadd_back(&tmp, ft_lstnew(ft_strdup("b")));
	// ft_lstadd_back(&tmp, ft_lstnew(ft_strdup("c")));
	// ft_lstadd_back(&tmp, ft_lstnew(ft_strdup("d")));
	// ft_lstadd_back(&tmp, ft_lstnew(ft_strdup("e")));
	// ft_lstiter(tmp, modif);
	// while (tmp)
	// {
	// 	printf("%s\n", tmp->content);
	// 	tmp = tmp->next;
	// }
	printf("%s\n", ft_strtrim("bawissalab", "ab"));
	return 0;
}
