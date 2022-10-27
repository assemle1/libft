# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astalha < astalha@student.1337.ma>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 23:42:01 by astalha           #+#    #+#              #
#    Updated: 2022/10/27 03:13:32 by astalha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c ft_strlcat.c ft_strncmp.c  ft_isalpha.c ft_strnstr.c ft_calloc.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_putendl_fd.c\
					ft_memcpy.c  ft_strchr.c  ft_strlcpy.c  ft_tolower.c ft_bzero.c   ft_isascii.c ft_memcpy.c ft_atoi.c ft_strjoin.c ft_itoa.c ft_putchar_fd.c\
					ft_memmove.c   ft_strlen.c  ft_strrchr.c ft_toupper.c  ft_isdigit.c ft_memchr.c  ft_memset.c ft_strdup.c ft_substr.c ft_split.c ft_putstr_fd.c ft_putnbr_fd.c
BONUS			=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
					
OBJS			= $(SRCS:.c=.o)
BONUS_OBJS		= $(BONUS:.c=.o)
CC				= gcc
RM				= rm -f
AR				= ar rc
FLAGS			= -Wall -Wextra -Werror
NAME			= libft.a

.PHONY: all clean bonus fclean re

$(NAME): $(OBJS) 
	$(AR) $(NAME) $(OBJS)

all: $(NAME) 
	
%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@
	
bonus: $(BONUS_OBJS) libft.h
	$(AR) $(NAME) $(BONUS_OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
	 