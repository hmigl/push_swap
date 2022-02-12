#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ds_list.h"
# include <stdlib.h>
# include <unistd.h>

# define MAX_INT 2147483647
# define MIN_INT -2147483648

enum e_errors {
	ERR_USAGE,
	ERR_ARGS,
	ERR_DUP,
	ERR_RANGE,
	ERR_SORTED
};

int		check_args(char **args, int argc);
void	err_manager(int exit_code);

#endif
