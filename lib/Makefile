##
## Makefile for printf in /home/b3nja13/Documents/printf
## 
## Made by benjamin horiot
## Login   <b3nja13@epitech.net>
## 
## Started on  Wed Nov 14 11:25:10 2012 benjamin horiot
## Last update Thu Feb  7 15:54:01 2013 benjamin horiot
##

SRC	=	base.c \
		lib.c \
		convfct.c \
		convfct2.c \
		convfct3.c \
		convfct4.c \
		getnbr.c \
		lib.c \
		my_getnbr.c \
		my_printf.c \
		scientist.c \
		search.c \
		error.c \
		my_strcmp.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

RM	=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all