/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fit_in_range.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:17:17 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/07 10:11:22 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_array(int *array, int vol)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < vol)
	{
		j = i + 1;
		while (j < vol)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			++j;
		}
		++i;
	}
}

static void	setup_arrays(int **aux, int *orig, int vol)
{
	int	i;

	(*aux) = malloc(sizeof(int) * vol);
	if (!(*aux))
		return ;
	i = -1;
	while (++i < vol)
		(*aux)[i] = orig[i];
}

int	*fit_in_range(int *orig, int vol)
{
	int	*in_range;
	int	*aux;
	int	i;
	int	j;

	setup_arrays(&aux, orig, vol);
	in_range = malloc(sizeof(int) * vol);
	if (!in_range)
		return (NULL);
	sort_array(aux, vol);
	i = 0;
	while (i < vol)
	{
		j = 0;
		while (orig[i] != aux[j])
			++j;
		in_range[i] = j;
		++i;
	}
	return (in_range);
}
