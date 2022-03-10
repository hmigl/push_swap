/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fulfill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:19:17 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/04 11:19:19 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	data->stack_a->bottom = NULL;
	data->stack_b->bottom = NULL;
	data->stack_a->size = 0;
	data->stack_b->size = 0;
}

void	fulfill(t_data *data, char **args, int argc)
{
	int	i;
	int	*simplified;
	int	*to_be_simplified;

	to_be_simplified = malloc(sizeof(int) * argc);
	if (!to_be_simplified)
		return ;
	i = -1;
	while (++i < argc)
		to_be_simplified[i] = ft_atoi(args[i]);
	simplified = fit_in_range(to_be_simplified, argc);
	init_stacks(data);
	while (argc-- != 0)
		push(data->stack_a, dlstnew(simplified[argc]));
	free(to_be_simplified);
	free(simplified);
}
