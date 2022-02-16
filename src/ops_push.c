#include "push_swap.h"

/* push a:
 * take the first element at the top of stack b
 * and put it at the top of stack a
 */
void	pa(t_data *data)
{
	push(data->stack_a, pop(data->stack_b));
	ft_putendl_fd("pa", STDOUT_FILENO);
}

/* push b:
 * take the first element at the top of stack a
 * and put it at the top of stack b
 */
void	pb(t_data *data)
{
	push(data->stack_b, pop(data->stack_a));
	ft_putendl_fd("pb", STDOUT_FILENO);
}
