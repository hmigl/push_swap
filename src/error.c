/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:19:13 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/04 16:05:07 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	err_manager(int exit_code)
{
	if (exit_code == ERR_ARGS || exit_code == ERR_DUP || exit_code == ERR_RANGE)
		ft_putendl_fd("Error", STDERR_FILENO);
	exit(exit_code + 1);
}
