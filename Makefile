##
## Makefile for  in /home/mart_4/rendu/104intersection
## 
## Made by Thomas Martins
## Login   <mart_4@epitech.eu>
## 
## Started on  Mon Dec 29 13:27:06 2014 Thomas Martins
## Last update Mon Dec 29 13:27:06 2014 Thomas Martins
##

SRC =		104intersection.c \
		check_error.c \
		calcul.c

NAME = 		104intersection

OBJ =		$(SRC:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJ)
		(cd lib/my/ ;make re)
		cc -o $(NAME) $(OBJ) -lm -lmy -L./lib/my

clean:
		rm -f  $(OBJ)
		(cd lib/my/ ;make clean)

fclean:		clean
		rm -f  $(NAME)
		(cd lib/my/ ;make fclean)

re:		fclean all
