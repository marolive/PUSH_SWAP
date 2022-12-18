NAME	= push_swap
SRCS	= push_swap.c \
			operations/add_node.c \
			utils/print.c \
			operations/rotate.c \
			operations/swap.c \
			operations/reverse_rotate.c \
			validations.c


LIB_DIR = libft
LIB		= $(LIB_DIR)/libft.a
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(LIB)
	@$(CC) $(CFLAGS) $(SRCS) $(LIB) -o $(NAME) 

$(LIB):
	@make -C $(LIB_DIR)

clean:
	$(RM) $(NAME)
	make clean -C $(LIB_DIR)

fclean: clean
	$(RM) $(NAME) $(LIB)

re: fclean all

.PHONY: all clean fclean re
