/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstnew.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:20:51 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/04 11:20:52 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ds_list.h"

t_node	*dlstnew(int data)
{
	t_node	*element;

	element = malloc(sizeof(t_node));
	if (element == NULL)
		return (NULL);
	element->data = data;
	element->next = NULL;
	element->prev = NULL;
	return (element);
}
