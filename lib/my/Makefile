##
## Makefile for makefile printf in /home/charre_s/rendu/PSU_2014_my_printf
## 
## Made by stephane  charre
## Login   <charre_s@epitech.net>
## 
## Started on  Mon Nov 10 17:55:27 2014 stephane  charre
## Last update Tue Dec  9 18:30:10 2014 stephane  charre
##

SRC =           my_getnbr.c \
                my_putstr.c \
                my_putchar.c \
		my_revstr.c \
		my_strlen.c \
                my_put_nbr.c \
		my_flags.c \
		my_modifiers.c \
		my_printf.c \
		my_put_nbr_base.c \
		my_put_nbr_base_long.c \
		my_put_nbr_long.c \
		my_types_smaj.c 

NAME =          libmy.a

OBJ =           $(SRC:.c=.o)

all:            $(NAME)

$(NAME):        $(OBJ)
		ar rc $(NAME) $(OBJ)
clean:
		rm -f  $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
