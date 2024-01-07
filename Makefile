# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 17:27:14 by adapassa          #+#    #+#              #
#    Updated: 2024/01/04 18:10:04 by adapassa         ###   ########.fr        #
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
		ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_memcmp.c \

SRC_BONUS =	ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c \
				ft_lstsize.c ft_lstdelone.c ft_lstlast.c \
				ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

DEFAULT = \033[0;39m
GREEN = \033[0;92m
RED = \033[0;91m
CIANO = \033[0;96m

all: $(NAME)

$(NAME): $(OBJ)
		@ $(LIB) $(NAME) $(OBJ)
		@ echo "$(GREEN)$(NAME) compilata con successo❗️ 📁$(DEFAULT)"

clean:
		@ rm -f $(OBJ) $(OBJ_BONUS)
		@ echo "$(CIANO)file oggetto di $(NAME) rimossi con successo❗️ 🪦$(DEFAULT)"

fclean: clean
		@ rm -f $(NAME)
		@ echo "$(RED)$(NAME) rimossa con successo❗️ ❌$(DEFAULT)"

re: fclean all

bonus: $(OBJ) $(OBJ_BONUS)
		@$(LIB) $(NAME) $(OBJ) $(OBJ_BONUS)

.PHONY: all clean fclean bonus
