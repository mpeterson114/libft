NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HDRS = libft.h
SRCS = ft_isalpha.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_memset.c\
	ft_memcpy.c\
	ft_atoi.c\
    ft_isalnum.c\
    ft_isascii.c\
    ft_isdigit.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_isprint.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memmove.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strdup.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strlcat.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	 ft_putnbr_fd.c\
	

OBJS = $(SRCS:.c=.o)

BONUS = ft_lstnew.c\
		#ft_lstadd_front.c\
		#ft_lstsize.c\
		#ft_lstlast.c\
		#ft_lstadd_back.c\
		#ft_lstdelone.c\
		#ft_lstclear.c\
		#ft_lstiter.c\
		#ft_lstmap.c\

BONUS_OBJS = $(BONUS:.c=.o)

LIBR = ranlib
LIBC = ar rc
REMOVE = rm -f

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(REMOVE) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	$(LIBC) $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus
