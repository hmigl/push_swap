/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:18:35 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/04 11:18:50 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_data	data;

	if (argc < 2)
		err_manager(ERR_USAGE);
	check_args(argv + 1, argc - 1);
	fulfill(&data, argv + 1, argc - 1);
	sort_stack_elements(&data);
	//clear();
	return (0);
}
