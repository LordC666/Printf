# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnieto <cnieto@student.42madrid.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 10:00:52 by cnieto            #+#    #+#              #
#    Updated: 2024/10/19 18:22:34 by cnieto           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC	=	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

BONUS = ft_lstadd_front_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstnew_bonus.c \
	ft_lstsize_bonus.c \

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(BONUS:.c=.o)
INCLUDE = libft.h
AR = ar rcs
RM = rm -f

BONUS_FLAG = .bonus_done

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus: $(NAME) $(BONUS_FLAG)

$(BONUS_FLAG): $(OBJ_BONUS)
	@echo "Adding bonus objects to $(NAME)..."
	$(AR) $(NAME) $(OBJ_BONUS)
	@touch $(BONUS_FLAG)

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean all re rebonus bonus

clean:
	$(RM) $(OBJ) $(OBJ_BONUS) $(BONUS_FLAG)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus
