# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/03 13:50:38 by kakadlec          #+#    #+#              #
#    Updated: 2022/01/24 22:37:54 by kakadlec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES	=	ft_atoi.c			\
			ft_bzero.c			\
			ft_calloc.c			\
			ft_isalnum.c		\
			ft_isalpha.c		\
			ft_isascii.c		\
			ft_isdigit.c		\
			ft_isprint.c		\
			ft_itoa.c				\
			ft_memccpy.c		\
			ft_memchr.c			\
			ft_memcmp.c			\
			ft_memcpy.c			\
			ft_memmove.c		\
			ft_memset.c			\
			ft_putchar_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_putstr_fd.c	\
			ft_split.c			\
			ft_strchr.c			\
			ft_strdup.c			\
			ft_strjoin.c		\
			ft_strlcat.c		\
			ft_strlcpy.c		\
			ft_strlen.c			\
			ft_strmapi.c		\
			ft_strncmp.c		\
			ft_strnew.c			\
			ft_strnstr.c		\
			ft_strrchr.c		\
			ft_strtrim.c		\
			ft_substr.c			\
			ft_tolower.c		\
			ft_toupper.c		\
			ft_ulitohexa.c	\
			ft_uitohexa.c		\
			ft_uitoa.c			\
			ft_lstadd_back.c	\
			ft_lstadd_front.c	\
			ft_lstclear.c			\
			ft_lstdelone.c		\
			ft_lstiter.c			\
			ft_lstlast.c			\
			ft_lstmap.c				\
			ft_lstnew.c				\
			ft_lstsize.c			\

OBJS	=	$(FILES:%.c=%.o)

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I. -c
RM			= rm -f

NAME		= libft.a
HEADER		= libft.h

all:		$(NAME)

$(NAME):	$(OBJS)
			@ar rcs $(NAME) $(OBJS)

$(OBJS):	$(FILES)
			$(CC) $(CFLAGS) $(FILES)

clean:
			$(RM) $(OBJS) $(OBJS_B) $(OBJS_X)
fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY: clean fclean all re
