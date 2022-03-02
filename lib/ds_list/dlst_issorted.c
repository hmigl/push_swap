#include "ds_list.h"

int	dlst_issorted(t_node *node)
{
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	return (1);
}
