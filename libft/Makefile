SRCS = srcs/

PREFIX = ft_

FLAGS = -Wall -Werror -Wextra

CC = gcc -c

NAME = libft.a

all:
	$(CC) $(SRCS)$(PREFIX)*.c $(FLAGS) -I $(SRCS)
	ar rc $(NAME) $(PREFIX)*.o

clean:
	rm -f $(PREFIX)*.o

fclean: clean
	rm -f $(NAME)

re: fclean all
