NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra -g
SRC_DIR	= src/
SRC = $(SRC_DIR)parsing_args.c $(SRC_DIR)index_stack.c $(SRC_DIR)parsing_string.c $(SRC_DIR)utils.c \
		$(SRC_DIR)stack_utils.c $(SRC_DIR)operations.c $(SRC_DIR)sort.c $(SRC_DIR)push_swap.c
OBJS = $(SRC:.c=.o)
LIBFT = ImprovedLibft/improvedlibft.a

all: $(NAME)

$(NAME): $(SRC) $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $@
	
%.o: %.c
	@$(CC) $(CFLAGS) -c $(SRC)
	@echo "Compiled all files"

$(LIBFT):
	@make -C ./ImprovedLibft -s

clean:
	@rm -f $(OBJS)
	@make clean -C ./ImprovedLibft -s
	@echo "Cleaned all objects"
	
fclean: clean
	@rm -f $(NAME)
	@make fclean -C ./ImprovedLibft -s
	@echo "Cleaned library"
	
re: fclean all

.PHONY: all clean fclean re