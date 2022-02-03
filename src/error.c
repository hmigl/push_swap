#include "push_swap.h"

static char	*err_msg(int exit_code)
{
	char	*err_msg[2];

	err_msg[ERR_USAGE] = "Which numbers do you want to sort?\n"
		"For example, try './push_swap <numbers to be sorted>'";
	return (err_msg[exit_code]);
}

void	err_manager(int exit_code)
{
	ft_putendl_fd(err_msg(exit_code), STDERR_FILENO);
	exit(exit_code);
}
