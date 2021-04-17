##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## bsq
##

CC 	= 	gcc

SRC 	=		src/bsq.c\
				src/count_2.c\
				src/count.c\
				src/main.c\
				lib/my_strlen.c\
				lib/my_strcpy_modified.c\
				lib/my_putstr.c


OBJ     = 		$(SRC:.c=.o)

NAME	=		 bsq

CFLAGS 	=	-W -Wall -Wextra -pedantic


all:	$(NAME)

$(NAME): $(OBJ)
		gcc -o $(NAME) $(OBJ)
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all