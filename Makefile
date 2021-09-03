# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbelo <gbelo-so@student.42sp.org.br>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 17:27:02 by gbelo-so          #+#    #+#              #
#    Updated: 2021/09/03 12:24:05 by gbelo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./ft_strnstr.c

OBJS = $(SRC:.c=.o)

NAME = libft.a

CFLAGS= -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRC)
	gcc $(CFLAGS) $(SRC)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re