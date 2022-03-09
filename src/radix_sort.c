/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:19:17 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/09 18:01:07 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	locate_msb(int num)
{
	int	pos;

	pos = 0;
	while ((num >> pos) != 0)
		++pos;
	return (pos);
}

void	radix_sort(t_data *data)
{
	int	i;
	int	j;
	int	nbits;
	int	orig_size;

	i = 0;
	nbits = locate_msb(dlst_largest(data->stack_a->top));
	orig_size = data->stack_a->size;
	while (i < nbits)
	{
		j = 0;
		while (j < orig_size)
		{
			if ((((data->stack_a->top->data) >> i) & 1) == 0)
				pb(data);
			else
				ra(data);
			++j;
		}
		while (!isempty(data->stack_b->top))
			pa(data);
		++i;
	}
}
