# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/18 20:14:44 by mrychkov          #+#    #+#              #
#    Updated: 2017/04/24 14:15:38 by mrychkov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INC = libft.h
SRC = *.c;
OBJ = $(SRC:.c=.o)

NO_COLOR = \033[0m
WAIT_COLOR = \033[1;33m
OK_COLOR = \033[1;32m
CLEAN_COLOR = \033[1;36m

.PHONY: all clean fclean re

all: $(NAME)
$(NAME):
	echo "$(WAIT_COLOR)--::libft creation::--$(NO_COLOR)"
	$(CC) $(CFLAGS) -c $(SRC) -I $(INC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	echo "$(OK_COLOR)--::libft compiled::--$(NO_COLOR)"

clean:
	echo "$(WAIT_COLOR)--::.o deletion::--$(NO_COLOR)"
	rm -f $(OBJ)

fclean: clean
	echo "$(WAIT_COLOR)--::.a deletion::--$(NO_COLOR)"
	rm -rf $(NAME)

re: fclean all
	echo "$(WAIT_COLOR)--::final deletion::--$(NO_COLOR)"
