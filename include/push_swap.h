#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

struct s_node {
	int	data;
	struct s_node	*next;
	struct s_node	*prev;
};
typedef struct s_node	t_node;

#endif
