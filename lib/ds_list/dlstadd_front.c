/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstadd_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:20:59 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/04 11:21:00 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ds_list.h"

void	dlstadd_front(t_node **lst, t_node *new)
{
	if (*lst != NULL)
		(*lst)->prev = new;
	new->next = *lst;
	*lst = new;
}
