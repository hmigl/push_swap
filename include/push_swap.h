#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>

struct s_node {
	int	data;
	struct s_node	*next;
	struct s_node	*prev;
};
typedef struct s_node	t_node;

enum e_errors {
	ERR_USAGE = 1
};

int		check_arg(char *argv[]);
void	err_manager(int exit_code);

#endif
