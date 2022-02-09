#include "push_swap.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
		err_manager(ERR_USAGE);
	check_args(argv + 1, argc - 1);
	return (0);
}
