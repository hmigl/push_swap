/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:19:33 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/04 11:19:34 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
