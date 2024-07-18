##
## EPITECH PROJECT, 2023
## projet tek2
## File description:
## Makefile
##

CC	= gcc

SRC		=	$(wildcard ./src/*.asm)

OBJ		=	$(SRC:.asm=.o)

NAME	=	libasm.so

%.o: %.asm
	nasm -f elf64 $< -o $@

$(NAME): $(OBJ)
	$(CC) -nostdlib -shared -fPIC $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	re fclean clean all
