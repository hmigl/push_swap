/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:20:08 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/04 16:11:43 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	valid_check(char **args, int argc)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (!ft_isnumber(args[i]))
			err_manager(ERR_ARGS);
		++i;
	}
}

static void	range_check(char **args, int argc)
{
	int		i;
	long	num;

	i = 0;
	while (i < argc)
	{
		num = ft_atol(args[i]);
		if (num > MAX_INT || num < MIN_INT)
			err_manager(ERR_RANGE);
		++i;
	}
}

static void	uniq_check(char **args, int argc)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(args[i]) == ft_atoi(args[j]))
				err_manager(ERR_DUP);
			++j;
		}
		++i;
	}
}

static void	sort_check(char **args, int argc)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(args[i]) > ft_atoi(args[j]))
				return ;
			++j;
		}
		++i;
	}
	err_manager(ERR_SORTED);
}

int	check_args(char **args, int argc)
{
	valid_check(args, argc);
	range_check(args, argc);
	uniq_check(args, argc);
	sort_check(args, argc);
	return (0);
}
