#include "ds_list.h"

void	dlst_dealloc(t_node **head, t_node **tail)
{
	t_node	*curr;

	if (*head == NULL)
		return ;
	curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
		free(curr->prev);
	}
	free(curr);
	*head = NULL;
	*tail = NULL;
}
