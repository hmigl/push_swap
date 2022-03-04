/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quintet_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:12:46 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/04 11:12:49 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ascend_smallest(int nbr_idx, t_data *data)
{
	int	half;

	half = data->stack_a->size / 2;
	if (nbr_idx == 0)
		pb(data);
	else if (nbr_idx <= half)
		ra(data);
	else if (nbr_idx > half)
		rra(data);
}

static int	locate_smallest_nbr_idx(t_node *node)
{
	int	smallest;
	int	idx;
	int	aux;

	smallest = MAX_INT;
	idx = 0;
	aux = 0;
	while (node != NULL)
	{
		if (node->data < smallest)
		{
			smallest = node->data;
			idx = aux;
		}
		node = node->next;
		++aux;
	}
	return (idx);
}

void	sort_quintet(t_data *data)
{
	int	idx;

	while (data->stack_a->size > 3)
	{
		idx = locate_smallest_nbr_idx(data->stack_a->top);
		ascend_smallest(idx, data);
	}
	sort_trio(data);
	while (!isempty(data->stack_b->top))
		pa(data);
}
