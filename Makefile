# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 17:27:14 by adapassa          #+#    #+#              #
#    Updated: 2023/12/23 16:46:42 by adapassa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAG = -Wall -Wextra -Werror -g
NAME = libft.a
LIB = ar rcs $(NAME)

SRC = ft_bzero.c ft_isalnum.c \
		ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memset.c \
		ft_strlen.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c \
		ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c \

OBJ = $(SRC:.c=.o)

DEFAULT = \033[0;39m
GREEN = \033[0;92m
RED = \033[0;91m
CIANO = \033[0;96m

all: $(NAME)

$(NAME): $(OBJ)
		@ $(LIB) $(NAME) $(OBJ)
		@ echo "$(GREEN)$(NAME) compilata con successo❗️ 📁$(DEFAULT)"

clean:
		@ rm -f $(OBJ)
		@ echo "$(CIANO)file oggetto di $(NAME) rimossi con successo❗️ 🪦$(DEFAULT)"

fclean: clean
		@ rm -f $(NAME)
		@ echo "$(RED)$(NAME) rimossa con successo❗️ ❌$(DEFAULT)"

re: fclean all

.PHONY: all clean fclean