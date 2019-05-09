NAME =	libmy.a

SRC =	lib.c

OBJ =	$(SRC:.c=.o)

CC =	gcc

CFLAGS = -ansi -pedantic -W -Wall -Werror

RM =	rm -f

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

dust :
	$(RM) *~ \#*

clean : dust
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
