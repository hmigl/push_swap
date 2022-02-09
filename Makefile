NAME := push_swap

SRC_DIR := src
OBJ_DIR := obj
INCLUDE_DIR := include
LFT_DIR := libft
LFT := $(LFT_DIR)/libft.a

CFLAGS := -Wall -Wextra -Werror -ggdb3
IFLAGS := -I$(INCLUDE_DIR) -I$(LFT_DIR)
LFLAGS := -L$(LFT_DIR) -lft
CC := gcc

SRC = main.c error.c validation.c
SRC := $(addprefix $(SRC_DIR)/, $(SRC))
OBJ := $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.c=.o)))

all: $(NAME)

$(NAME): $(OBJ)
	@make --no-print-directory -C $(LFT_DIR)
	@$(CC) $(OBJ) $(LFLAGS) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(IFLAGS) -c $< -o $@

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir $@

clean:
	@make clean --no-print-directory -C $(LFT_DIR)
	@rm -rf $(OBJ)

fclean: clean
	@make fclean --no-print-directory -C $(LFT_DIR)
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
