#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;

	if (!new)
		return;
	if (!*lst)
		*lst = new;
	tmp = *lst;
	while (tmp->next != NULL)
	{
		tmp = tmp -> next;
	}
	tmp->next = new;
	new->next = NULL;
}


















// {
	
// 	t_list *ptr;

	
// 	if (!new)
// 		return (NULL);
// 	if (alst == NULL)
		
// 	else 
// 	while (temp -> next != NULL)
// 		{
// 			temp = temp-> next;
// 		}
//  	temp -> next = new ;
//  	return (alst);
//  }