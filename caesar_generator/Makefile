NAME =	generate_caesar_code

SRC =	main.cpp caesar_generator.cpp

OBJ =	$(SRC:.cpp=.o)

CC =	g++

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
