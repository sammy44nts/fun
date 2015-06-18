NAME =	caesar_code_breaker

SRC =	caesar.c

OBJ =	$(SRC:.c=.o)

CC =	gcc

CFLAGS = -ansi -pedantic -W -Wall

RM =	rm -f

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

dust :
	$(RM) *~ \#*

clean : dust
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
