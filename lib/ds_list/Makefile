NAME := libds_list.a

OBJ_DIR := obj

SRC := dlstnew.c dlstlast.c dlstadd_front.c \
	   dlstadd_back.c dlst_dealloc.c dlst_issorted.c dlst_largest.c

OBJ := $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

ARFLAGS := rcs
CFLAGS += -Wall -Wextra -Werror -g
CC := gcc

$(OBJ_DIR)/%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ)

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean
