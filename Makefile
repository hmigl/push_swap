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
CC := gcc

SRC = main.c error.c validation.c
SRC := $(addprefix $(SRC_DIR)/, $(SRC))
OBJ := $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.c=.o)))

all: $(NAME)

$(NAME): $(OBJ) $(LFT) $(DS_LIST)
	@$(CC) $(OBJ) $(LFLAGS) -o $@

$(LFT):
	@make --no-print-directory -C $(LFT_DIR)

$(DS_LIST):
	@make --no-print-directory -C $(DS_LIST_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(IFLAGS) -c $< -o $@

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir $@

clean:
	@make clean --no-print-directory -C $(LFT_DIR)
	@make clean --no-print-directory -C $(DS_LIST_DIR)
	@rm -rf $(OBJ)

fclean: clean
	@make fclean --no-print-directory -C $(LFT_DIR)
	@make fclean --no-print-directory -C $(DS_LIST_DIR)
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
