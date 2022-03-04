/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstadd_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:21:04 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/04 11:21:05 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ds_list.h"

void	dlstadd_back(t_node **lst, t_node *new)
{
	t_node	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = dlstlast(*lst);
	last->next = new;
	new->prev = last;
}
