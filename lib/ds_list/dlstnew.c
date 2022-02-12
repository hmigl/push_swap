#include "ds_list.h"

t_node	*dlstnew(int data)
{
	t_node	*element;

	element = malloc(sizeof(t_node));
	if (element == NULL)
		return (NULL);
	element->data = data;
	element->next = NULL;
	element->prev = NULL;
	return (element);
}
