NAME = libftprintf.a
SRC = printf.c
OBJ = printf.o

all:$(NAME)

$(NAME):$(OBJ)
	ar rcs $@ libft/*.o $<

$(OBJ):$(SRC)
	gcc -c $< -o $@
