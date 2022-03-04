/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:19:57 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/04 11:19:58 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	t_node	*fst;
	t_node	*scd;

	if (isempty(stack->top) || stack->size == 1)
		return ;
	fst = pop(stack);
	scd = pop(stack);
	push(stack, fst);
	push(stack, scd);
}

/* swap a:
 * take the first two elements at the top of stack a
 * and swap them
 */
void	sa(t_data *data)
{
	swap(data->stack_a);
	ft_putendl_fd("sa", STDOUT_FILENO);
}

/* swap b:
 * take the first two elements at the top of stack b
 * and swap them
 */
void	sb(t_data *data)
{
	swap(data->stack_b);
	ft_putendl_fd("sb", STDOUT_FILENO);
}

/* ss:
 * sa and sb, at the same time
 */
void	ss(t_data *data)
{
	sa(data);
	sb(data);
	ft_putendl_fd("ss", STDOUT_FILENO);
}
