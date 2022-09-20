NAME= libft.a

CC= gcc
CFLAGS= -Wall -Werror -Wextra
RM= rm -rf

SRC= *.c //cambiar  salto de línea con ejemplo.c\
OBJS= $(SRC: .c=.o)

all:		$(NAME)

$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: clean all

.PHONY:		all re clean fclean