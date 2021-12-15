# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cben-wak <cben-wak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 17:38:23 by cben-wak          #+#    #+#              #
#    Updated: 2021/12/14 18:52:01 by cben-wak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
INC = libft.h
CRT = ar -cr
REMOVE = rm -rf

SRCS = ft_atoi.c \
       ft_bzero.c \
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
        ft_putnbr_fd.c\
       ft_putstr_fd.c \
       ft_putendl_fd.c \
       ft_split.c \
       ft_strchr.c \
       ft_strdup.c \
       ft_striteri.c \
       ft_strjoin.c \
       ft_strlcat.c \
       ft_strlen.c \
       ft_strmapi.c \
       ft_strncmp.c \
       ft_strrchr.c \
       ft_strtrim.c \
       ft_substr.c \
       ft_tolower.c \
       ft_toupper.c \
       ft_strlcpy.c \
       ft_strnstr.c \
       ft_calloc.c \

OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INC)
	$(CRT) $@ $^
%.o:%.c
	cc $(FLAGS) -c $< -o $@
clean:
	$(REMOVE) $(OBJS)
fclean: clean
	$(REMOVE) $(NAME)
re: fclean all
.PHONY: all clean fclean re