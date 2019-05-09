NAME =	caesar_code_breaker

MYLIB = $(LIBDIR)/libmy.a

SRCDIR = src

SRC =	$(SRCDIR)/main.c $(SRCDIR)/caesar.c $(SRCDIR)/show.c

OBJ =	$(SRC:.c=.o)

CC =	gcc

CFLAGS = -ansi -pedantic -W -Wall -I$(LIBDIR)

LDFLAGS = -lmy

LIBDIR = lib

RM =	rm -f

all : $(NAME)

$(NAME) : $(MYLIB) $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -L$(LIBDIR) $(LDFLAGS)

$(MYLIB) :
	make -C $(LIBDIR)

dust :
	$(RM) *~ \#*

clean : dust
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)
	make -C $(LIBDIR) fclean

re : fclean all
