#include "push_swap.h"

void	err_manager(int exit_code)
{
	if (exit_code != 0)
		ft_putendl_fd("Error", STDERR_FILENO);
	exit(exit_code + 1);
}
