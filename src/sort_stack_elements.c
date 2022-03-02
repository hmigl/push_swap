#include "push_swap.h"

void	sort_stack_elements(t_data *data)
{
	if (data->stack_a->size == 2)
		sa(data);
	else if (data->stack_a->size == 3)
		sort_trio(data);
}
