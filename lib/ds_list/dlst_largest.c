/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_largest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:52:11 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/09 16:21:11 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ds_list.h"

int	dlst_largest(t_node *node)
{
	int	largest;

	largest = node->data;
	while (node != NULL)
	{
		if (node->data > largest)
			largest = node->data;
		node = node->next;
	}
	return (largest);
}
