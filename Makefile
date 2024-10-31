# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yusliu <yusliu@student.42malaga.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/13 20:55:48 by yusliu            #+#    #+#              #
#    Updated: 2024/10/08 11:39:41 by yusliu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_striteri.c \
      		ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
      		ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
      		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      		ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c \
      		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
      		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_BONUS = 	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
        	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
        	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
			
OBJ = ${SRC:.c=.o}
OBJ_BONUS = ${SRC_BONUS:.c=.o}
CFLAGS = -Wall -Werror -Wextra
CC = cc
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
