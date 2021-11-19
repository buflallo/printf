.DEFAULT_GOAL := all
NAME=libft.a
SRCS=atoi.c\
    bzero.c\
    calloc.c\
    ft_putchar_fd.c\
    ft_putendl_fd.c\
    ft_putnbr_fd.c\
    ft_putstr_fd.c\
    ft_split.c\
    ft_striteri.c\
    ft_strmapi.c\
    ft_strtrim.c\
    ft_substr.c\
    isalnum.c\
    isalpha.c\
    isascii.c\
    isdigit.c\
    isprint.c\
    itoa.c\
    memchr.c\
    memcmp.c\
    memcpy.c\
    memmove.c\
    memset.c\
    strchr.c\
    strdup.c\
    strjoin.c\
    strlcat.c\
    strlcpy.c\
    strlen.c\
    strncmp.c\
    strnstr.c\
    strrchr.c\
    tolower.c\
    toupper.c

FBONUS=ft_lstadd_back.c\
    ft_lstadd_front.c\
    ft_lstclear.c\
    ft_lstdelone.c\
    ft_lstiter.c\
    ft_lstlast.c\
    ft_lstmap.c\
    ft_lstnew.c\
    ft_lstsize.c

CC          = cc
CFLAGS      = -Wall -Wextra -Werror
OBJS        = $(SRCS:%.c=%.o)
BOBJS       = $(FBONUS:%.c=%.o)

all:$(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $?
	@echo "archive the objects in" $@ "lbrary"

$(OBJS):%.o: %.c
	@gcc -c $< -o $@
	@echo "compiling" $<

bonus: $(BOBJS)
	@echo "adding bonus to" $(NAME) "lbrary"
	@ar rcs $(NAME) $?


$(BOBJS):%.o: %.c
	@echo "compiling" $<
	@gcc -c $< -o $@

clean:
	@echo "cleaning ...."
	@rm -f *.o
	@echo "done"

bclean:
	@echo "cleaning bonus ...."
	@rm -f _bonus/*.o
	@echo "done"

fclean:clean bclean
	@echo "remove the library archive ...."
	@rm -f libft.a
	@echo "done"

.PHONY: bonus
