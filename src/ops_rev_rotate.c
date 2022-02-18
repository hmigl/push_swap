#include "push_swap.h"

void	rev_rotate(t_stack *stack)
{
	t_node	*last;
	t_node	*scd_last;

	if (isempty(stack->top) || stack->size == 1)
		return ;
	last = dlstlast(stack->top);
	scd_last = last->prev;
	scd_last->next = NULL;
	last->prev = NULL;
	dlstadd_front(&(stack->top), last);
}

/* rra:
 * shift down all elements of stack a by 1;
 * the last element becomes the first one
 */
void	rra(t_data *data)
{
	rev_rotate(data->stack_a);
	ft_putendl_fd("rra", STDOUT_FILENO);
}

/* rrb:
 * shift down all elements of stack b by 1;
 * the last element becomes the first one
 */
void	rrb(t_data *data)
{
	rev_rotate(data->stack_b);
	ft_putendl_fd("rra", STDOUT_FILENO);
}

/* rrr:
 * rra and rrb, at the same time
 */
void	rrr(t_data *data)
{
	rra(data);
	rrb(data);
	ft_putendl_fd("rrr", STDOUT_FILENO);
}
