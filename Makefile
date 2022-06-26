NAME := push_swap

SRCDIR := src
OBJDIR := objdir
LIBFT_DIR := lib/libft
DS_LIST_DIR := lib/ds_list

LIBFT := $(LIBFT_DIR)/libft.a
DS_LIST := $(DS_LIST_DIR)/libds_list.a

CFLAGS = $(INCLUDE) -Wall -Wextra -Werror -g
LDLIBS = -lft -lds_list
LDFLAGS = -L $(LIBFT_DIR) -L $(DS_LIST_DIR)
INCLUDE = -Iinclude -I$(LIBFT_DIR) -I$(DS_LIST_DIR)

SRC = main.c error.c validation.c fit_in_range.c \
	  fulfill.c ops_stack.c ops_push.c ops_swap.c \
	  ops_rotate.c ops_rev_rotate.c sort_stack_elements.c trio_sort.c \
	  quintet_sort.c radix_sort.c ps_global_cleanup.c

SRC := $(addprefix $(SRCDIR)/, $(SRC))
OBJS := $(addprefix $(OBJDIR)/, $(notdir $(SRC:.c=.o)))

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(COMPILE.c) $< -o $@

# all: options $(NAME)
all: $(NAME)

options:
	@echo "$(NAME) build options:"
	@echo "CFLAGS        = $(CFLAGS)"
	@echo "LDFLAGS       = $(LDFLAGS)"
	@echo "LDLIBS        = $(LDLIBS)"
	@echo "CC            = $(CC)"

$(NAME): $(OBJS) $(LIBFT) $(DS_LIST)
	$(CC) $(OBJS) $(LDFLAGS) $(LDLIBS) -o $@

$(LIBFT):
	make -C $(LIBFT_DIR) --no-print-directory

$(DS_LIST):
	make -C $(DS_LIST_DIR) --no-print-directory

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	mkdir $@

clean:
	make clean -C $(LIBFT_DIR) --no-print-directory
	make clean -C $(DS_LIST_DIR) --no-print-directory
	$(RM) $(OBJS)

fclean: clean
	make fclean -C $(LIBFT_DIR) --no-print-directory
	make fclean -C $(DS_LIST_DIR) --no-print-directory
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean
