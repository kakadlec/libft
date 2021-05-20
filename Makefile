SRCS		=	ft_memset.c \
				ft_bzero.c  \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c

OBJS		= $(SRCS:.c=.o)

CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

NAME		= libft.a

all:		$(NAME)
$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)
clean:
				$(RM) $(OBJS)
fclean:		clean
				$(RM) $(NAME)
re:			fclean $(NAME)
