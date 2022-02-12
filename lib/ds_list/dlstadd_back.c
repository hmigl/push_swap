#include "ds_list.h"

void	dlstadd_back(t_node **lst, t_node *new)
{
	t_node	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = dlstlast(*lst);
	last->next = new;
	new->prev = last;
}
