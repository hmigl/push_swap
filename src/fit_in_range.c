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

static int	partition(int *array, int start, int end)
{
	int	i;
	int	j;
	int	pivot;
	int	tmp;

	pivot = array[end];
	i = start - 1;
	j = start;
	while (j < end)
	{
		if (array[j] < pivot)
		{
			++i;
			tmp = array[j];
			array[j] = array[i];
			array[i] = tmp;
		}
		++j;
	}
	tmp = array[end];
	array[end] = array[i + 1];
	array[i + 1] = tmp;
	return (i + 1);
}

static void	quick_sort(int *array, int start, int end)
{
	int	idx;

	if (start >= end)
		return ;
	idx = partition(array, start, end);
	quick_sort(array, start, idx - 1);
	quick_sort(array, idx + 1, end);
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
	quick_sort(aux, 0, vol - 1);
	i = 0;
	while (i < vol)
	{
		j = 0;
		while (orig[i] != aux[j])
			++j;
		in_range[i] = j;
		++i;
	}
	free(aux);
	return (in_range);
}
