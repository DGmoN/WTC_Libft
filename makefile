GC=gcc
FLAGS=-Wextra -Wall -Werror
BUILD_DIR='mko'
SRC_DIR=*.c

make_o: fclean make_dir
	cd $(BUILD_DIR); \
	gcc -c ../$(SRC_DIR) $(FLAGS)

make_dir:
	mkdir $(BUILD_DIR)

fclean:
	rm -rf $(BUILD_DIR)
