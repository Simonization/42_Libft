

SRCS = ft_atoi.c \


OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

GCC = gcc 

RM = rm -f

NAME = libft.a

.o: .c 
	${GCC} ${CFLAGS} -c $< -o ${OBJS}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}
	@echo "libft has compiled successfully"

all: ${NAME}

clean:
	${RM} ${OBJS}
	@echo ".o files have been cleaned"

fclean: clean
	${RM} ${NAME}
	@echo "libft has been cleaned thoroughly"

re: fclean all

.PHONY: all clean flclean re









/*

NAMEofLIB= libft.a

OBJETS= SRC(.o=.c)

$(NAME)

target: prerequisites
	command
	command
	command

target: dependency
	cc -Wall $(NAME) 

lib: objets
	ar rcs $(OBJETS) $(NAMEofLIB)

objets: fichiers.c


all
clean
fclean
re

*/