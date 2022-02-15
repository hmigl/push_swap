#include "push_swap.h"

static t_stack	*stack_factory(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (stack == NULL)
		return (NULL);
	return (stack);
}

static void	init_stacks(t_data *data)
{
	t_stack	*a;
	t_stack	*b;

	a = stack_factory();
	b = stack_factory();
	data->stack_a = a;
	data->stack_b = b;
	data->stack_a->top = NULL;
	data->stack_b->top = NULL;
	data->stack_a->size = 0;
	data->stack_b->size = 0;
}

void	fulfill(t_data *data, char **args, int argc)
{
	init_stacks(data);
	while (argc-- != 0)
	{
		int num = ft_atoi(args[argc]);
		push(data->stack_a, dlstnew(num));
	}
}
