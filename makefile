GC=gcc
FLAGS=-Wextra -Wall -Werror
BUILD_DIR='mko'
SRC_DIR=*.c
TEST_SRC=tests
TEST_OUTPUT_DIR=unit

make_o: fclean make_dir
	cd $(BUILD_DIR); \
	gcc -c ../$(SRC_DIR) $(FLAGS)

make_dir:
	mkdir $(BUILD_DIR)

make_test_dir:
	@mkdir $(TEST_OUTPUT_DIR)

test: $(TEST_OUTPUT_DIR)
	@echo "Making test: $(FIND)"
	@$(GC) $(TEST_SRC)/$(FIND) $(SRC_DIR) -o '$(TEST_OUTPUT_DIR)/test_$(FIND)'

fclean:
	rm -rf $(BUILD_DIR)
	rm -rf $(TEST_OUTPUT_DIR)
