#include "ds_list.h"

void	dslstadd_front(t_node **lst, t_node *new)
{
	if (*lst != NULL)
		(*lst)->prev = new;
	new->next = *lst;
	*lst = new;
}
