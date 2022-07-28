# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/05 23:11:56 by bsirikam          #+#    #+#              #
#    Updated: 2022/07/28 22:10:49 by bsirikam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strchr.c \
ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strncmp.c \
ft_memmove.c ft_memcmp.c ft_memchr.c ft_strdup.c ft_strrchr.c ft_strnstr.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_lstnew.c ft_lstadd_front.c \
ft_lstsize.c ft_lstlast.c

OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

norm:
	norminette

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

re: fclean all

.PHONY: clean fclean re all
