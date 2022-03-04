/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:19:50 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/04 11:19:51 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	{
		stack->top = NULL;
		stack->bottom = NULL;
	}
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
	if (!new_node)
		return ;
	if (isempty(stack->top))
		stack->bottom = new_node;
	dlstadd_front(&(stack->top), new_node);
	++(stack->size);
}
