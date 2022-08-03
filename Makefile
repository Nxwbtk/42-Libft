# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/05 23:11:56 by bsirikam          #+#    #+#              #
#    Updated: 2022/07/30 00:33:36 by bsirikam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strchr.c \
ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strncmp.c \
ft_memmove.c ft_memcmp.c ft_memchr.c ft_strdup.c ft_strrchr.c ft_strnstr.c \
ft_substr.c ft_strjoin.c ft_strtrim.c 

SRC_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \

OBJ = $(SRC:.c=.o)
OBJ_B = $(SRC_B:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

bonus: $(OBJ_B)
	@ar rcs $(NAME) $(OBJ_B)

clean:
	@rm -f $(OBJ) $(OBJ_B)

fclean: clean
	@rm -f $(NAME)

norm:
	norminette

re: fclean all

.PHONY: clean fclean re all bonus
