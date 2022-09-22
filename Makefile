NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HDRS = libft.h
SRCS = ft_isalpha.c\
	#    ft_atoi.c\
	#    ft_bzero.c\
	#    ft_calloc.c\
	#    ft_isalnum.c\
	#    ft_isascii.c\
	#    ft_isdigit.c\
	#    ft_toupper.c\
	#    ft_tolower.c\
	#    ft_isprint.c\
	#    ft_memchr.c\
	#    ft_memcmp.c\
	#    ft_memcpy.c\
	#    ft_memmove.c\
	#    ft_memset.c\
	#    ft_strchr.c\
	#    ft_strrchr.c\
	#    ft_strdup.c\
	#    ft_strncmp.c\
	#    ft_strnstr.c\
	#    ft_strlcpy.c\
	#    ft_strlcat.c\
	#    ft_strlen.c\

OBJS = ${SRCS: .c = .o}

LIBR = ranlib
LIBC = ar rc
REMOVE = rm -f

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${REMOVE} ${OBJS} 

fclean: clean
	${REMOVE} ${NAME}

re: fclean all

.PHONY: all clean fclean re
