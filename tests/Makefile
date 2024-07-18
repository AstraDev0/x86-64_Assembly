##
## EPITECH PROJECT, 2023
## B-ASM-400-BER-4-1-asmminilibc-matthis.brocheton
## File description:
## Makefile
##

CC	= gcc

CFLAGS	= -W -Wextra -pedantic -Werror -g -fno-builtin -I../include/ -I.

SLIB	= ../libasm.so

NAME	= tests

SRCS	= $(wildcard ./*.c)

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	make re -C ..
	$(CC) -o $(NAME) $(OBJS) $(SLIB)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	make fclean -C ../

re: fclean all

.PHONY: all clean fclean re
