NAME	= libftprintf.a
HEADER	= libftprintf.h
FT		= ftprintf
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs

SRC		= ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_printf.c
OBJ		= ${SRC:.c=.o}

all: ${NAME}
	@echo "\nsuccessfully made\n"

%.o: %.c ${HEADER}
	${CC} -c ${CFLAGS} $< -o $@

${NAME}: ${OBJ}
	${AR} ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

run: all
	read -p "Enter a file: " FILE; \
	${CC} "$$FILE".c -L. -l${FT} -o "$$FILE"; \
	./"$$FILE"

pro: all
	${CC} test.c -L. -l${FT} -o test; \
	./test

.PHONY: all clean fclean re run pro test