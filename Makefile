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
SRC = ft_putchar.c ft_putchar_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_putendl.c ft_strlen.c ft_putendl_fd.c ft_strcat.c ft_strcpy.c ft_memalloc.c ft_strnew.c ft_memset.c ft_memcpy.c ft_toupper.c ft_tolower.c ft_isupper.c ft_islower.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strdup.c ft_strncpy.c ft_memmove.c ft_itoa.c ft_atoi.c ft_pow.c ft_bzero.c ft_strjoin.c ft_strdel.c ft_memdel.c ft_strncat.c ft_memccpy.c ft_strchr.c ft_memchr.c ft_strrchr.c ft_strinv.c ft_strcmp.c ft_isspace.c ft_strtrim.c ft_memcmp.c ft_strncmp.c ft_strlcat.c ft_isprint.c ft_strstr.c ft_strnstr.c ft_strsplit.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.cft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_sqrt.c ft_lstadd_end.c ft_swap.c 
OBJ = $(SRC:.c=.o)

# dir
SRC_DIR = srcs
OBJ_DIR = objs
INC_DIR = includes

# paths
SRC_PATH = $(addprefix $(SRC_DIR)/, $(SRC))
OBJ_PATH = $(addprefix $(OBJ_DIR)/, $(OBJ))
INC_PATH = $(addprefix -I, $(INC_DIR))

# rules
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ_PATH)
	echo "$(WAIT_COLOR)--- Libft creation.... ---$(NO_COLOR)"
	ar rc  $@ $(OBJ_PATH)
	ranlib $@
	echo "$(OK_COLOR)--- Libft successfully compiled! ---$(NO_COLOR)"

$(OBJ_DIR)/%.o: $(SRS_DIR)/%.c
	@mkdir -p $(OBJ_DIR) 2> /dev/null || true
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

norme:
	@norminette $(SRC_PATH) includes/libft.h
clean:
	echo "$(WAIT_COLOR)--- .o deletion.... ---$(NO_COLOR)"
	rm -f $(OBJ_PATH)
	@rmdir $(OBJ_DIR) 2> /dev/null || true

fclean: clean
	echo "$(WAIT_COLOR)--- Libft deletion.... ---$(NO_COLOR)"
	rm -rf $(NAME)

re: fclean all
