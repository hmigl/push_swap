/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_dealloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:21:11 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/04 11:21:14 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ds_list.h"

void	dlst_dealloc(t_node **head, t_node **tail)
{
	t_node	*curr;

	if (*head == NULL)
		return ;
	curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
		free(curr->prev);
	}
	free(curr);
	*head = NULL;
	*tail = NULL;
}
