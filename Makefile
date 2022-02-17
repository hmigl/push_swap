NAME := push_swap

SRC_DIR := src
OBJ_DIR := obj
INCLUDE_DIR := include
LFT_DIR := lib/libft
DS_LIST_DIR := lib/ds_list

LFT := $(LFT_DIR)/libft.a
DS_LIST := $(DS_LIST_DIR)/libds_list.a

IFLAGS := -I$(INCLUDE_DIR) -I$(LFT_DIR) -I$(DS_LIST_DIR)
LFLAGS := -L$(LFT_DIR) -lft -L$(DS_LIST_DIR) -lds_list

CFLAGS := -Wall -Wextra -Werror -ggdb3
CC := gcc -g

SRC = main.c error.c validation.c fulfill.c \
	  ops_stack.c ops_push.c ops_swap.c ops_rotate.c

SRC := $(addprefix $(SRC_DIR)/, $(SRC))
OBJ := $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.c=.o)))

all: $(NAME)

$(NAME): $(OBJ) $(LFT) $(DS_LIST)
	@$(CC) $(OBJ) $(LFLAGS) -o $@

$(LFT):
	@make -C $(LFT_DIR) --no-print-directory

$(DS_LIST):
	@make -C $(DS_LIST_DIR) --no-print-directory

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(IFLAGS) -c $< -o $@

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir $@

clean:
	@make clean -C $(LFT_DIR) --no-print-directory
	@make clean -C $(DS_LIST_DIR) --no-print-directory
	@rm -rf $(OBJ)

fclean: clean
	@make fclean -C $(LFT_DIR) --no-print-directory
	@make fclean -C $(DS_LIST_DIR) --no-print-directory
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
