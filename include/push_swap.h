#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ds_list.h"

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_stack		t_stack;
typedef struct s_data		t_data;

struct s_stack {
	int		size;
	t_node	*top;
};

struct s_data {
	t_stack	*stack_a;
	t_stack	*stack_b;
};

enum e_errors {
	ERR_USAGE,
	ERR_ARGS,
	ERR_DUP,
	ERR_RANGE,
	ERR_SORTED
};

int		check_args(char **args, int argc);
void	err_manager(int exit_code);
void	fulfill(t_data *data, char **args, int argc);

void	push(t_stack *stack, t_node *new_node);
t_node	*pop(t_stack *stack);
t_node	*peek(t_stack *stack);
int		isempty(t_node *top);

void	pa(t_data *data);
void	pb(t_data *data);

#endif
