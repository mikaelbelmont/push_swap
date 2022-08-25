NAME = push_swap

SRCS = 

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = gcc

$(NAME):	$(OBJS) $(LIBFT)
		cd libft && make all
		$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

all:	$(NAME)

clean:
		cd libft && make clean
		rm -rf $(OBJS)

fclean:		clean
		cd libft && make fclean
		rm -rf $(NAME)

re:		fclean 	all