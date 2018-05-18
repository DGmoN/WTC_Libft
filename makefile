GC=gcc
FLAGS=-Wextra -Wall -Werror
BUILD_DIR='mko'
SRC_DIR=*.c
NAME=libft.a

all: $(NAME)

$(NAME): make_o make


make:	make_o
	ar rcs $(NAME) $(BUILD_DIR)/*.o

make_o: clean make_dir
	cd $(BUILD_DIR); \
	gcc -c ../$(SRC_DIR) $(FLAGS)

re: make make_o

make_dir:
	mkdir $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm $(NAME)
