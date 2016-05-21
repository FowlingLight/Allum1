##
## Makefile for allum1 in /home/b3nja13/Documents/svn/allum1
## 
## Made by benjamin horiot
## Login   <horiot_b@epitech.net>
## 
## Started on  Mon Feb  4 10:22:33 2013 benjamin horiot
## Last update Wed Feb  6 17:51:53 2013 benjamin horiot
##

SRC	=	ia.c \
		allum.c \
		get_cmd.c \
		main.c \
		aff_end.c \
		pvp.c

NAME	=	allum1

OBJ	=	$(SRC:.c=.o)

DIRLIB	=	./lib/

LIB	=	-L./lib/ -lmy -ltermcap

all:		$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C $(DIRLIB)
		gcc -o $(NAME) $(OBJ) $(LIB)

clean:
		$(MAKE) -C $(DIRLIB) clean
		rm -f $(OBJ)

fclean:		clean
		$(MAKE) -C $(DIRLIB) fclean
		rm -f $(NAME)

re:		fclean all