#include "push_swap.h"

static char	*err_msg(int exit_code)
{
	char	*err_msg[10];

	err_msg[ERR_USAGE] = "Which numbers do you want to sort?\n"
		"For example, try './push_swap <numbers to be sorted>'";
	err_msg[ERR_ARGS] = "Only integer numbers are allowed as arguments!";
	err_msg[ERR_DUP] = "The numbers cannot be duplicated!";
	err_msg[ERR_RANGE] = "The numbers must be between INT_MIN and INT_MAX!";
	err_msg[ERR_SORTED] = "Nothing to be done, arguments are already sorted!";
	return (err_msg[exit_code]);
}

void	err_manager(int exit_code)
{
	ft_putendl_fd(err_msg(exit_code), STDERR_FILENO);
	exit(exit_code);
}
