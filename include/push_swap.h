/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:13:11 by hmigl             #+#    #+#             */
/*   Updated: 2022/03/04 15:56:30 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	t_node	*bottom;
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

/*
 * Algorithm functions and utils
 */
void	sort_stack_elements(t_data *data);
void	sort_trio(t_data *data);
void	sort_quintet(t_data *data);

int		check_args(char **args, int argc);
void	err_manager(int exit_code);
void	fulfill(t_data *data, char **args, int argc);

int		*fit_in_range(int *orig, int vol);

/*
 * Basic stack operations
 */
t_node	*pop(t_stack *stack);
t_node	*peek(t_stack *stack);
int		isempty(t_node *top);
void	push(t_stack *stack, t_node *new_node);

/*
 * Subject allowed actions
 */
void	pa(t_data *data);
void	pb(t_data *data);

void	swap(t_stack *stack);
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);

void	rotate(t_stack *stack);
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);

void	rev_rotate(t_stack *stack);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);

#endif
