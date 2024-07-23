# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slangero <slangero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/05 11:00:32 by slangero          #+#    #+#              #
#    Updated: 2024/05/06 16:24:57 by slangero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS = ft_calloc.c ft_isprint.c	ft_memcpy.c	ft_putnbr_fd.c	ft_striteri.c	ft_strmapi.c	ft_substr.c \
	ft_isalnum.c	ft_isspace.c	ft_memmove.c	ft_putstr_fd.c	ft_strjoin.c	ft_strncmp.c	ft_tolower.c \
	ft_isalpha.c	ft_itoa.c	ft_memset.c	ft_split.c	ft_strlcat.c	ft_strnstr.c	ft_toupper.c \
	ft_atoi.c	ft_isascii.c	ft_memchr.c	ft_putchar_fd.c	ft_strchr.c	ft_strlcpy.c	ft_strrchr.c \
	ft_bzero.c	ft_isdigit.c	ft_memcmp.c	ft_putendl_fd.c	ft_strdup.c	ft_strlen.c	ft_strtrim.c

###################################

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

GCC = gcc 

RM = rm -f

NAME = libft.a

###################################

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}
	@echo "libft has compiled successfully"

.o: .c 
	${GCC} ${CFLAGS} -c $< -o ${OBJS}

###################################

clean:
	${RM} ${OBJS}
	@echo ".o files have been cleaned"

fclean: clean
	${RM} ${NAME}
	@echo "libft has been cleaned thoroughly"

re: fclean all

###################################

.PHONY: all clean fclean re








# NAMEofLIB= libft.a

# OBJETS= SRC(.o=.c)

# $(NAME)

# target: prerequisites
# 	command
# 	command
# 	command

# target: dependency
# 	cc -Wall $(NAME) 

# lib: objets
# 	ar rcs $(OBJETS) $(NAMEofLIB)

# objets: fichiers.c


# all
# clean
# fclean
# re

# */
