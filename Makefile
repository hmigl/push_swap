NAME := push_swap

OBJDIR := objdir
LIBFT_DIR := lib/libft
LIBFT := $(LIBFT_DIR)/libft.a
DS_LIST_DIR := lib/ds_list
DS_LIST := $(DS_LIST_DIR)/libds_list.a

CFLAGS += $(INCLUDE) -Wall -Wextra -Werror -g
LDLIBS += -lft -lds_list
LDFLAGS += -L$(LIBFT_DIR) -L$(DS_LIST_DIR)
INCLUDE = -Iinclude -I$(LIBFT_DIR) -I$(DS_LIST_DIR)

vpath %.c src

OBJS = $(addprefix $(OBJDIR)/, $(notdir $(SRC:.c=.o)))
SRC = main.c error.c validation.c fit_in_range.c \
	  fulfill.c ops_stack.c ops_push.c ops_swap.c \
	  ops_rotate.c ops_rev_rotate.c sort_stack_elements.c trio_sort.c \
	  quintet_sort.c radix_sort.c ps_global_cleanup.c

$(OBJDIR)/%.o: %.c
	$(COMPILE.c) $(OUTPUT_OPTION) $<

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
	$(MAKE) -C $(LIBFT_DIR) --no-print-directory

$(DS_LIST):
	$(MAKE) -C $(DS_LIST_DIR) --no-print-directory

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	mkdir $@

clean:
	$(MAKE) clean -C $(LIBFT_DIR) --no-print-directory
	$(MAKE) clean -C $(DS_LIST_DIR) --no-print-directory
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR) --no-print-directory
	$(MAKE) fclean -C $(DS_LIST_DIR) --no-print-directory
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean
