/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_global_cleanup.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 07:22:35 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/10 07:31:50 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	clean_nodes(t_node *head, t_node *tail)
{
	dlst_dealloc(&head, &tail);
}

static void	clean_stack(t_stack *stack)
{
	stack->size = 0;
	stack->bottom = NULL;
	stack->top = NULL;
	free(stack);
}

void	ps_global_cleanup(t_data *data)
{
	clean_nodes(data->stack_a->top, data->stack_a->bottom);
	clean_stack(data->stack_a);
	clean_stack(data->stack_b);
}
