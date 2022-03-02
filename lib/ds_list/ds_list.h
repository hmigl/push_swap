#ifndef DS_LIST_H
# define DS_LIST_H

# include <stdlib.h>

struct s_node {
	int				data;
	struct s_node	*next;
	struct s_node	*prev;
};
typedef struct s_node	t_node;

t_node	*dlstnew(int data);
t_node	*dlstlast(t_node *lst);
void	dlstadd_front(t_node **lst, t_node *new);
void	dlstadd_back(t_node **lst, t_node *new);
void	dlst_dealloc(t_node **head, t_node **tail);
int		dlst_issorted(t_node *node);

#endif
