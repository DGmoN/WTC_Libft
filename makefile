GC=gcc
FLAGS=-Wextra -Wall -Werror
DEP=libft.h
OBJ_DIR:=ft_atoi.o ft_bzero.o \
	ft_intpow.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o \
	ft_itoa.o ft_memalloc.o ft_memccpy.o ft_memchr.o ft_memcmp.o \
	ft_memcpy.o ft_memdel.o ft_memmove.o ft_memset.o ft_putchar.o \
	ft_putline.o ft_putstr.o ft_strcat.o ft_strchr.o ft_strclr.o \
	ft_strcmp.o ft_strcpy.o ft_strdup.o ft_striter.o ft_striteri.o \
	ft_strlcat.o ft_strlen.o ft_strmap.o ft_strmapi.o ft_strncat.o \
	ft_strncmp.o ft_strncpy.o ft_strnew.o ft_strnstr.o ft_strrchr.o \
	ft_strsplit.o ft_strstr.o ft_tolower.o ft_toupper.o

NAME=libft.a

all: $(NAME)

$(NAME): $(OBJ_DIR)
	ar rc $(NAME) $(OBJ_DIR)
	@ranlib $(NAME)

$(OBJ_DIR): $(DEP)
	@echo "Making $*"
	@$(CC) -c -o $@ $*.c $(FLAGS)

make: $(OBJ_DIR)
	@echo "DONE"

re: fclean all;

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)
