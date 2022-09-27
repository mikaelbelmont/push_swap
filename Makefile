NAME = push_swap

SRCS = main.c checker.c swaps.c sort1.c exit.c rev_rotates.c rotates.c \
		index.c finished.c

LIBFT = libft/libft.a

CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address  

CC = gcc

$(NAME):	$(OBJS) $(LIBFT)
		$(CC) $(CFLAGS) $(SRCS) -Llibft -lft -o $(NAME)

$(LIBFT):
	make -C libft

all:	$(NAME)

clean:
		cd libft && make clean
		rm -rf $(OBJS)

fclean:		clean
		cd libft && make fclean
		rm -rf $(NAME)

re:		fclean 	all