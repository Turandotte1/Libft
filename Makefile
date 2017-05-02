# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/18 20:14:44 by mrychkov          #+#    #+#              #
#    Updated: 2017/05/02 18:47:40 by mrychkov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# colours

NO_COLOR = \033[0m
WAIT_COLOR = \033[1;33m
OK_COLOR = \033[1;32m
CLEAN_COLOR = \033[1;36m

# compiliation

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# files

SRC = ft_atoi.c \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_toupper.c \
ft_tolower.c \
ft_memccpy.c \
ft_memcpy.c \
ft_memchr.c \
ft_memcmp.c \
ft_memmove.c \
ft_memset.c \
ft_strcat.c \
ft_strchr.c \
ft_strcpy.c \
ft_strdup.c \
ft_strlcat.c \
ft_strlen.c \
ft_strncat.c \
ft_strncpy.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strstr.c \
ft_strncmp.c \
ft_strnchr.c \
ft_strcmp.c \
ft_memalloc.c \
ft_putchar.c \
ft_putchar_fd.c \
ft_putstr.c \
ft_putstr_fd.c \
ft_strnew.c \
ft_putnbr.c \
ft_putnbr_fd.c \
ft_putendl.c \
ft_putendl_fd.c \
# ft_memdel.c \
# ft_strdel.c \
# ft_strclr.c \
# ft_striter.c \
# ft_striteri.c \
# ft_strmap.c \
# ft_strmapi.c \
# ft_strsub.c \
# ft_strequ.c \
# ft_strnequ.c \ 
# ft_strjoin.c \
# ft_strstrim.c \
# ft_strsplit.c \
# ft_itoa.c \
# ft_lstnew.c \
# ft_lstdelone.c \
# ft_lstdel.c \
# ft_lstadd.c \
# ft_lstiter.c \
# ft_lstmap.c \
ft_isspace.c

# dir

SRC_DIR = ./srcs
OBJ_DIR = ./objs
INC_DIR = ./includes

# paths

SRC_PATH = $(addprefix $(SRC_DIR)/,$(SRC))
OBJ_PATH = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

# rules

.PHONY: all, clean, fclean, re

all: $(NAME) $(OBJ_PATH)

$(NAME): $(OBJ_PATH)
	@echo "$(WAIT_COLOR)	--- Libft creation.... ---	$(NO_COLOR)"
	ar rc $@ $(OBJ_PATH)
	ranlib $@
	@echo "$(OK_COLOR)	--- Libft successfully compiled! ---	$(NO_COLOR)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<

norme:
	@norminette $(SRC_PATH) $(INC_DIR)
clean:
	@echo "$(WAIT_COLOR)	--- .o deletion.... ---		$(NO_COLOR)"
	rm -f $(OBJ_PATH)
	@rmdir $(OBJ_DIR)

fclean: clean
	@echo "$(WAIT_COLOR)	--- Libft deletion.... ---	$(NO_COLOR)"
	rm -f $(NAME)

re: fclean all
