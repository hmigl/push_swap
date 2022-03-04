/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_issorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:21:08 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/04 11:21:09 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ds_list.h"

int	dlst_issorted(t_node *node)
{
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	return (1);
}
