/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_elements.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:20:03 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/04 11:20:05 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack_elements(t_data *data)
{
	if (data->stack_a->size == 2)
		sa(data);
	else if (data->stack_a->size == 3)
		sort_trio(data);
	else if (data->stack_a->size == 5)
		sort_quintet(data);
	else
		radix_sort(data);
}
