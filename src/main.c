#include "push_swap.h"
#include <stdio.h>

void displayforward(t_node *head)
{
	t_node *curr = head;

	while (curr != NULL) {
		printf("%d\n", curr->data);
		curr = curr->next;
	}
	putchar('\n');
}

int	main(int argc, char *argv[])
{
	t_data	data;

	if (argc < 2)
		err_manager(ERR_USAGE);
	check_args(argv + 1, argc - 1);
	fulfill(&data, argv + 1, argc - 1);
	//displayforward(data.stack_a->top);
	//printf("size: %d\n", data.stack_a->size);
	//sort_stack();
	//clear();
	return (0);
}
