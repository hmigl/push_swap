NAME := libds_list.a

OBJ_DIR := obj

SRC := dlstnew.c dlstlast.c dlstadd_front.c \
	   dlstadd_back.c dlst_dealloc.c dlst_issorted.c

OBJ := $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

CFLAGS := -Wall -Wextra -Werror
CC := gcc $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir $@

$(OBJ_DIR)/%.o: %.c
	@$(CC) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
