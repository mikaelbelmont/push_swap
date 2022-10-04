NAME = push_swap

# SRCS = main.c checker.c swaps.c sort1.c exit.c rev_rotates.c rotates.c \
# 		push.c index.c radixsort.c finished.c
SRCS	= $(wildcard *.c)

OBJS	= $(SRCS:.c=.o)

LIBFT = libft/libft.a

CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address  

CC = gcc

$(NAME):	$(LIBFT) $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -Llibft -lft

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