NAME	= libft.a
HEADER	= libft.h
FT	= ft
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
AR	= ar rcs
TEST	= test

SRC		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c
OBJ		= ${SRC:.c=.o}

all: ${NAME}
	@echo "\nsuccessfully made\n"

%.o: %.c ${HEADER}
	${CC} -c ${CFLAGS} $< -o $@

${NAME}: ${OBJ}
	${AR} ${NAME} ${OBJ}

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

run:
	@read -p "Enter a file: " FILE; \
	${CC} "$$FILE".c -L. -l${FT} -o "$$FILE"; \
	./"$$FILE"

pro: re
	${CC} ${TEST}.c -L. -l${FT} -o ${TEST}; \
	./${TEST}

.PHONY: all clean fclean re
