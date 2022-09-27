NAME= libft.a

CC= gcc
CFLAGS= -Wall -Werror -Wextra -g
RM= rm -f

SRC= ft_memset.c \
ft_bzero.c \
ft_calloc.c \
ft_memcpy.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \
ft_strlen.c \
ft_strdup.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strchr.c \
ft_strrchr.c \
ft_strnstr.c \
ft_strncmp.c \
ft_atoi.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_toupper.c \
ft_tolower.c \
ft_strmapi.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_itoa.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c

OBJS= $(SRC: .c=.o)

BONUS= ft_lstnew.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstadd_front.c \
ft_lstadd_back.c \
ft_lstsize.c \
ft_lstiter.c \
ft_lstmap.c \
ft_lstlast.c

BONUS_OBJS= $(BONUS: .c=.o)

all:		$(NAME)

$(NAME): $(OBJS)
	ar -crs $(NAME) $(OBJS) libft.h

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

bonus: $(NAME) $(BONUS_OBJS)
	ar -crs $(NAME) $(OBJS) $(BONUS_OBJS) libft.h

rebonus: fclean bonus

.PHONY:		all bonus re rebonus clean fclean