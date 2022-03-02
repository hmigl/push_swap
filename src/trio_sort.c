#include "push_swap.h"

static void	init_trio(t_stack *stack, int *el1, int *el2, int *el3)
{
	*el1 = stack->top->data;
	*el2 = stack->top->next->data;
	*el3 = stack->bottom->data;
}

void	sort_trio(t_data *data)
{
	t_stack	*stack;
	int		el1;
	int		el2;
	int		el3;

	stack = data->stack_a;
	init_trio(stack, &el1, &el2, &el3);
	if (el1 < el2 && el2 > el3 && el1 < el3)
	{
		sa(data);
		ra(data);
	}
	else if (el1 > el2 && el2 > el3)
	{
		sa(data);
		rra(data);
	}
	else if (el1 > el2 && el2 < el3 && el1 < el3)
		sa(data);
	else if (el1 > el2 && el2 < el3 && el1 > el3)
		ra(data);
	else
		rra(data);
}
