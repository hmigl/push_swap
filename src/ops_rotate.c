#include "push_swap.h"

void	rotate(t_stack *stack)
{
	t_node	*fst;

	if (isempty(stack->top) || stack->size == 1)
		return ;
	fst = pop(stack);
	dlstadd_back(&(stack->top), fst);
	++(stack->size);
}

/* ra:
 * shift up all elements of stack a by 1;
 * the first element becomes the last one
 */
void	ra(t_data *data)
{
	rotate(data->stack_a);
	ft_putendl_fd("ra", STDOUT_FILENO);
}

/* rb:
 * shift up all elements of stack b by 1;
 * the first element becomes the last one
 */
void	rb(t_data *data)
{
	rotate(data->stack_b);
	ft_putendl_fd("rb", STDOUT_FILENO);
}

/* rr:
 * ra and rb, at the same time
 */
void	rr(t_data *data)
{
	ra(data);
	rb(data);
	ft_putendl_fd("rr", STDOUT_FILENO);
}
