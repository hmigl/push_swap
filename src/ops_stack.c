#include "push_swap.h"

int	isempty(t_node *top)
{
	return (!top);
}

t_node	*peek(t_stack *stack)
{
	if (isempty(stack->top))
		return (NULL);
	return (stack->top);
}

t_node	*pop(t_stack *stack)
{
	t_node	*removed;

	removed = peek(stack);
	if (!removed)
		return (NULL);
	if (stack->size == 1)
		stack->top = NULL;
	else
	{
		stack->top = stack->top->next;
		stack->top->prev = NULL;
	}
	removed->next = NULL;
	removed->prev = NULL;
	--(stack->size);
	return (removed);
}

void	push(t_stack *stack, t_node *new_node)
{
	if (isempty(stack->top))
		return ;
	dlstadd_front(&(stack->top), new_node);
	++(stack->size);
}
