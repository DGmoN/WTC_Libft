GC=gcc
FLAGS=-Wextra -Wall -Werror
BUILD_DIR='mko'
SRC_DIR=*.c
NAME=libft.a

all: $(NAME)

$(NAME): make_o	
	ar rc $(NAME) $(BUILD_DIR)/*.o
	ranlib $(NAME)
	echo "Done"

make:	make_o
	

make_o: make_dir
	cd $(BUILD_DIR); \
	gcc -c ../$(SRC_DIR) $(FLAGS)

re: fclean $(all)

make_dir:
	mkdir $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME)
