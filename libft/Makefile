CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c ft_atoi.c ft_toupper.c ft_tolower.c


OBJS = $(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -Rf $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
