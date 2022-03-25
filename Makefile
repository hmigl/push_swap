NAME := push_swap

SRC_DIR := src
OBJ_DIR := obj
LIBFT_DIR := lib/libft
DS_LIST_DIR := lib/ds_list

LIBFT := $(LIBFT_DIR)/libft.a
DS_LIST := $(DS_LIST_DIR)/libds_list.a

INCLUDE := -I include -I $(LIBFT_DIR) -I $(DS_LIST_DIR)
LDLIBS += -lft -lds_list
LDFLAGS += -L $(LIBFT_DIR) -L $(DS_LIST_DIR)

CFLAGS += -Wall -Wextra -Werror -g
CC := gcc

SRC = main.c error.c validation.c fit_in_range.c \
	  fulfill.c ops_stack.c ops_push.c ops_swap.c \
	  ops_rotate.c ops_rev_rotate.c sort_stack_elements.c trio_sort.c \
	  quintet_sort.c radix_sort.c ps_global_cleanup.c

SRC := $(addprefix $(SRC_DIR)/, $(SRC))
OBJ := $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.c=.o)))

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT) $(DS_LIST)
	@$(CC) $(OBJ) $(LDFLAGS) $(LDLIBS) -o $@

$(LIBFT):
	@make -C $(LIBFT_DIR) --no-print-directory

$(DS_LIST):
	@make -C $(DS_LIST_DIR) --no-print-directory

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir $@

clean:
	@make clean -C $(LIBFT_DIR) --no-print-directory
	@make clean -C $(DS_LIST_DIR) --no-print-directory
	@$(RM) $(OBJ)

fclean: clean
	@make fclean -C $(LIBFT_DIR) --no-print-directory
	@make fclean -C $(DS_LIST_DIR) --no-print-directory
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean
