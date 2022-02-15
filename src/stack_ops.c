#include "push_swap.h"

void	push(t_stack *stack, t_node *new_node)
{
	dlstadd_front(&(stack->top), new_node);
	++(stack->size);
}
