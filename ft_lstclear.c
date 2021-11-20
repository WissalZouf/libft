#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *prev;

	if (!lst)
		return ;
	while (*lst)
	{
		prev = *lst;
		(*del)((*lst)->content);
		*lst = (*lst)->next;
		free(prev);
	}
	lst = NULL;
}