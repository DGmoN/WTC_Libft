GC=gcc
FLAGS=-Wextra -Wall -Werror
DEP=libft.h
OBJ_DIR:=ft_atoi.o ft_bzero.o ft_strtrim.o ft_strjoin.o ft_ischr.o \
	ft_intpow.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o \
	ft_isprint.o ft_strdel.o ft_strequ.o ft_strnequ.o ft_strsub.o\
	ft_itoa.o ft_memalloc.o ft_memccpy.o ft_memchr.o ft_memcmp.o \
	ft_memcpy.o ft_memdel.o ft_memmove.o ft_memset.o ft_putchar.o \
	ft_putendl.o ft_putstr.o ft_strcat.o ft_strchr.o ft_strclr.o \
	ft_strcmp.o ft_strcpy.o ft_strdup.o ft_striter.o ft_striteri.o \
	ft_strlcat.o ft_strlen.o ft_strmap.o ft_strmapi.o ft_strncat.o \
	ft_strncmp.o ft_strncpy.o ft_strnew.o ft_strnstr.o ft_strrchr.o \
	ft_strsplit.o ft_strstr.o ft_tolower.o ft_toupper.o ft_putchar_fd.o \
	ft_isspace.o ft_memchr_f.o ft_memchr_nf.o ft_strchr_nf.o ft_strchr_f.o \
	ft_memchr_n.o ft_strchr_n.o ft_maxi.o ft_mini.o ft_strndup.o \
	ft_putnbr.o ft_count_w.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
	ft_lstnew.o ft_strtrim_de.o ft_strtrim_delim.o

NAME=libft.a

all: $(NAME)

$(NAME): $(OBJ_DIR)
	@ar rc $(NAME) $(OBJ_DIR)
	@ranlib $(NAME)
	@echo "LIB MADE"

$(OBJ_DIR): $(DEP)
	@echo "Making $@"
	@$(GC) -c $*.c -o $@ $(FLAGS)

re: fclean all;

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)
